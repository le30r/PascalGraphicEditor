Unit USetWindowSize;

interface

uses System, System.Drawing, System.Windows.Forms;
var
  w: integer;
  h: integer;
  TWidth: TextBox;
    THeight: TextBox;
   Active: Boolean:=True;
type
  SetWindowSizeForm = class(Form)
    
    procedure BOk_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource USetWindowSize.SetWindowSizeForm.resources}
    TWidth: TextBox;
    THeight: TextBox;
    label1: &Label;
    label2: &Label;
    BOk: Button;
    {$include USetWindowSize.SetWindowSizeForm.inc}
  {$endregion FormDesigner}
  public
     
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure SetWindowSizeForm.BOk_Click(sender: Object; e: EventArgs);
begin
  w:= TWidth.Text.ToInteger;
  h:= THeight.Text.ToInteger;
  Active:=False;
  self.Close;
end;

begin
  
end.
