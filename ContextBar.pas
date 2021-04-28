unit ContextBar;

interface

uses System, System.Drawing, System.Windows.Forms, ToolBar, USetWindowSize, GraphABC, ULoadScreen;

var
  IsVisibleToolBar: boolean := false;
  Control: boolean:=false;
  LS: Form;

type
  ContextBarForm = class(Form)
    
    //procedure BShow_Click(sender: Object; e: EventArgs);
    procedure BResizeWindow_Click(sender: Object; e: EventArgs);
    procedure BSave_Click(sender: Object; e: EventArgs);
    procedure label1_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure BLoad_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource ContextBar.ContextBarForm.resources}
    BNew: Button;
    BSave: Button;
    BLoad: Button;
    BResizeWindow: Button;
    saveFileDialog1: SaveFileDialog;
    textBox1: TextBox;
    textBox2: TextBox;
    label1: &Label;
    label2: &Label;
    label3: &Label;
    openFileDialog: OpenFileDialog;
    {$include ContextBar.ContextBarForm.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end; 
  end; 
  
implementation

var
  XFirst, YFirst: integer;  //координаты начальной точки рисования
  XSecond, YSecond: integer;  //координаты конечной точки рисования
  FileName: String;  //имя файла




procedure ContextBarForm.BResizeWindow_Click(sender: Object; e: EventArgs); //процедура изменения размера
var Err: boolean:=false;

begin
 
 try  
 begin
 GraphABC.SetWindowWidth(strToInt((textBox1.Text.ToString)));
 GraphABC.SetWindowHeight(strToInt((textBox2.Text.ToString)));
 end
 except  
  Err:=True;
end;
  label3.Visible:=Err;
end;


procedure MouseDown(x, y, mb: integer);//действия при нажатии мыши 
begin
  SetBrushColor(FirstBrushColor);                 //
  SetGradientBrushSecondColor(SecondBrushColor);  //установка текущих цветов
  SetHatchBrushBackgroundColor(SecondBrushColor); //
  
  case OutlineStyle of        //выбор типа контура
    0: SetPenStyle(psSolid);
    1: SetPenStyle(psDash);
    2: SetPenStyle(psDot);
    3: SetPenStyle(psDashDot);
    4: SetPenStyle(psDashDotDot);
  end;
  
  if HatchEnabled then   // выбор кисти для специальной заливки
  begin
    SetBrushStyle(bsHatch);
     SetBrushColor(SecondBrushColor);
    SetHatchBrushBackgroundColor(FirstBrushColor);
    case SHatch of
      0: SetBrushHatch(bhHorizontal);
      1: SetBrushHatch(bhVertical);
      2: SetBrushHatch(bhForwardDiagonal);
      3: SetBrushHatch(bhCross);
    end;
  end
   else SetBrushStyle(bsSolid);
  
  if GradientEnabled then  //градиент
     SetBrushStyle(bsGradient);
  
  MoveTo(x, y);  //установка позиции рисования
  XFirst := x;   //начальные координаты 
  YFirst := y;   //
  GraphABC.SaveWindow('temp.tca'); //временный файл
 
end;

procedure FormClosing(sender : object; e : system.ComponentModel.CancelEventArgs);
begin
  GraphABC.CloseWindow(); 

end;

procedure MouseUp(x, y, mb: integer);//при отпускании мыши

begin
  
end;

procedure MouseMove(x, y, mb: integer);//Когда мышь двигается и кнопка нажата - происходит рисование.
var
  Radius: integer;

begin
  SetPenColor(DrawColor);  //цвет рисования
  SetPenWidth(DrawThickness);  //толщина рисования
  LockDrawing;           //
  Redraw;                //  плавное рисование 
  UnlockDrawing;         //
  if mb = 1 then    
    case Tool of // выбор инструмента для рисования
      0:
        begin
          GraphABC.LoadWindow('temp.tca');
          if Fill
            then
            GraphABC.Rectangle(XFirst, YFirst, x, y)        // 
          else                                              // прямоугольник 
            GraphABC.DrawRectangle(XFirst, YFirst, x, y);   //
        end;
      1: GraphABC.LineTo(x, y);  // карандаш
      2:
        begin
          GraphABC.LoadWindow('temp.tca');
          Radius := trunc(sqrt(sqr(XFirst - x) + sqr((YFirst - y))));
          if Fill
            then
              GraphABC.Circle(XFirst, YFirst, Radius)     //
            else                                          //окружность  
              GraphABC.DrawCircle(XFirst, YFirst, Radius);//              
        end;
      3:
        begin
          GraphABC.LoadWindow('temp.tca');
          if not(Control)
          then Line(XFirst,YFirst, x, y)
          else 
            if abs(XFirst - x) > abs(YFirst - y)     //
              then Line(XFirst,YFirst, x, YFirst)    // прямая
              else Line(XFirst,YFirst, XFirst, y)    //
        end;
      4: GraphABC.LineTo(x, y, EraseColor);  //стерка
      5: 
        begin
          GraphABC.LoadWindow('temp.tca');
          if Fill
            then
            GraphABC.Ellipse(XFirst, YFirst, x, y)            //
          else
            GraphABC.DrawEllipse(XFirst, YFirst, x, y);        // эллипс
        end;
     
    end;
end;

procedure KeyDown(Key: integer); //действия при нажатии клавиши Ctrl
begin
 Control:=Key = VK_ControlKey
    
end;

procedure KeyUp(Key: integer); //действия при отпускании клавиши Ctrl
begin
 Control:=not(Key = VK_ControlKey);
    
end;
procedure ContextBarForm.BSave_Click(sender: Object; e: EventArgs); //сохранение файла
begin
  saveFileDialog1.ShowDialog();
  FileName:=saveFileDialog1.FileName;
  if not(FileName = '') then GraphABC.SaveWindow(FileName);   
  ContextBarForm.ActiveForm.Text:='TicianGE - ' + FileName;
end;

procedure ContextBarForm.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure ContextBarForm.label1_Click(sender: Object; e: EventArgs);
begin
  
end;


procedure ContextBarForm.button1_Click(sender: Object; e: EventArgs);  //действие при нажатии на кнопку Новый файл
begin
    ContextBarForm.ActiveForm.Text:='TicianGE - untitled';    
    GraphABC.ClearWindow();
end;


procedure ContextBarForm.BLoad_Click(sender: Object; e: EventArgs); //загрузка файла
begin

  openFileDialog.ShowDialog();
  FileName:=openFileDialog.FileName;
  if not(FileName = '') then GraphABC.LoadWindow(FileName);
  ContextBarForm.ActiveForm.Text:='TicianGE - ' + FileName;
end;







begin
  
  Application.EnableVisualStyles();
  Application.SetCompatibleTextRenderingDefault(false);
  SetWindowIsFixedSize(true);

  GraphABCControl.Cursor := System.Windows.Forms.Cursors.Cross; //установка курсора рисования
  DrawColor := RGB(0, 0, 0);            //
  EraseColor := RGB(255, 255, 255);     //
  FirstBrushColor:=RGB(0, 0, 0);        //
  SecondBrushColor:=RGB(255, 255, 255); // установка стандартных значений переменных
  Tool:=1;                              //    
  DrawThickness := 1;                   //    
  SHatch:=0;                            // 
  OnMouseDown := MouseDown;             
  OnMouseMove := MouseMove;
  OnMouseUp := MouseUp;
  OnKeyDown:= KeyDown;
  OnKeyUp:= KeyUp;
  GraphABC.SetWindowCaption('TicianGE - Холст');

 
    GraphABC.SetWindowSize(0, 0); 
  (new LoadScreen).ShowDialog(ContextBarForm.ActiveForm); //окно - титульный лист 
    GraphABC.SetWindowSize(640, 480); 
  (new ToolBarForm).show;
  
  
end.

// 0 - прямоугольник
// 1 - Линия
// 2 - окружность
// 3 - прямая
// 4 - стерка
// 5 - эллипс