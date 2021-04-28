Unit ToolBar;

interface

uses System, System.Drawing, System.Windows.Forms;

var DrawColor: Color;  //основной цвет
    EraseColor: Color; //дополнительный цвет
    FirstBrushColor: Color;  // главный цвет заливки
    SecondBrushColor: Color; // доп цвет заливки
    DrawThickness: integer;  //толщина рисования
    Tool: integer;     // инструмент
   // DrawSmoothing: boolean;      
    OutlineStyle: integer;  //стиль контура
    Fill: boolean;  //заливка
    SHatch: integer;  //тип кисти
    HatchEnabled: boolean; //кисть включена
    GradientEnabled: boolean; //градиент
    colorDialog1: colorDialog;
      
type
 
  ToolBarForm = class(Form)
    procedure Color_Click(sender: Object; e: EventArgs);
   
    procedure trackBar1_Scroll(sender: Object; e: EventArgs);
    procedure Pen_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure Circle_Click(sender: Object; e: EventArgs);
    procedure SecondColor_Click(sender: Object; e: EventArgs);
    procedure Erase_Click(sender: Object; e: EventArgs);
    procedure tabPage1_Click(sender: Object; e: EventArgs);

  
        
    
    procedure comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure checkBox1_CheckedChanged(sender: Object; e: EventArgs);
    procedure comboBox2_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure FillBox_CheckedChanged(sender: Object; e: EventArgs);
    procedure radioButton1_CheckedChanged(sender: Object; e: EventArgs);
    procedure radioButton2_CheckedChanged(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
  
    procedure label2_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
    procedure label1_Click(sender: Object; e: EventArgs);
    procedure radioButton3_CheckedChanged(sender: Object; e: EventArgs);
    procedure label4_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource ToolBar.ToolBarForm.resources}
    Pen: Button;
    Thickness: TrackBar;
    Color: Button;
    button1: Button;
    Circle: Button;
    SecondColor: Button;
    Erase: Button;
    ToolParam: TabControl;
    tabPage1: TabPage;
    comboBox1: ComboBox;
    checkBox1: CheckBox;
    panel1: Panel;
    comboBox2: ComboBox;
    radioButton2: RadioButton;
    radioButton1: RadioButton;
    button2: Button;
    label1: &Label;
    label2: &Label;
    button3: Button;
    button4: Button;
    button5: Button;
    label3: &Label;
    radioButton3: RadioButton;
    label4: &Label;
    label5: &Label;
    label7: &Label;
    colorDialog1: ColorDialog;
    {$include ToolBar.ToolBarForm.inc}
  {$endregion FormDesigner}
  
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure ToolBarForm.Color_Click(sender: Object; e: EventArgs); //выбор основного цвета
begin
  colorDialog1.ShowDialog();
  Color.BackColor:=colorDialog1.Color; 
  DrawColor:=colorDialog1.Color;
end;

procedure ToolBarForm.SecondColor_Click(sender: Object; e: EventArgs); //выбор второго цвета
begin
  colorDialog1.ShowDialog();
  SecondColor.BackColor:=colorDialog1.Color;
  EraseColor:=colorDialog1.Color;
end;

procedure ToolBarForm.button2_Click(sender: Object; e: EventArgs);    //Выбор цвета заливки
begin
  colorDialog1.ShowDialog();
  button2.BackColor:=colorDialog1.Color;
  FirstBrushColor:=colorDialog1.Color;
end;

procedure ToolBarForm.button3_Click(sender: Object; e: EventArgs);    //Выбор цвета штриховки
begin
  colorDialog1.ShowDialog();
  button3.BackColor:=colorDialog1.Color;
  SecondBrushColor:=colorDialog1.Color;
end;

procedure ToolBarForm.trackBar1_Scroll(sender: Object; e: EventArgs); //выбор толщины
begin
  DrawThickness:=Thickness.Value;
end;

procedure ToolBarForm.Pen_Click(sender: Object; e: EventArgs);  //инструмент Карандаш
begin
  Tool:=1;
    ToolParam.Visible:=False;
end;

procedure ToolBarForm.button1_Click(sender: Object; e: EventArgs); //Инструмент Прямоугольник
begin
  Tool:=0;
  ToolParam.Visible:=True;
end;

procedure ToolBarForm.Circle_Click(sender: Object; e: EventArgs);   //инструмент Круг
begin
  Tool:=2;
   ToolParam.Visible:=True;
end;




procedure ToolBarForm.Erase_Click(sender: Object; e: EventArgs); //инструмент Стерка
begin
  Tool:=4;
    ToolParam.Visible:=False;
end;

procedure ToolBarForm.button4_Click(sender: Object; e: EventArgs);  //Инструмент Прямая
begin
  Tool:=3;
    ToolParam.Visible:=False;
end;

procedure ToolBarForm.button5_Click(sender: Object; e: EventArgs); //Инструмен Эллипс
begin
  Tool:=5;
  ToolParam.Visible:=True;
end;




procedure ToolBarForm.comboBox1_SelectedIndexChanged(sender: Object; e: EventArgs); //Стиль контура
begin
    OutlineStyle:=comboBox1.SelectedIndex;
end;

procedure ToolBarForm.comboBox2_SelectedIndexChanged(sender: Object; e: EventArgs); //Выбор типа штриха
begin
    SHatch:=comboBox2.SelectedIndex;
end;

procedure ToolBarForm.checkBox1_CheckedChanged(sender: Object; e: EventArgs);  //Включение заливки
begin
  Fill:=checkBox1.Checked;
  panel1.Visible:=checkBox1.Checked;
 
end;




procedure ToolBarForm.radioButton1_CheckedChanged(sender: Object; e: EventArgs); //Штриховая заливка
begin
 
   HatchEnabled:=radioButton1.Checked;
end;

procedure ToolBarForm.radioButton2_CheckedChanged(sender: Object; e: EventArgs); //Градиентная заливка
begin
  GradientEnabled:=radioButton2.Checked;
end;




//**USELESS STAFF**//

procedure ToolBarForm.FillBox_CheckedChanged(sender: Object; e: EventArgs);
begin
 
end;


procedure ToolBarForm.label2_Click(sender: Object; e: EventArgs);
begin
  
end;




procedure ToolBarForm.label1_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure ToolBarForm.radioButton3_CheckedChanged(sender: Object; e: EventArgs);
begin

end;

procedure ToolBarForm.label4_Click(sender: Object; e: EventArgs);
begin
  
end;


procedure ToolBarForm.tabPage1_Click(sender: Object; e: EventArgs);
begin
  
end;

//**USELESS STAFF**//

end.
