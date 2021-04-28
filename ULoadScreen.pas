Unit ULoadScreen;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  LoadScreen = class(Form)
    procedure l1_Click(sender: Object; e: EventArgs);
    procedure label2_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource ULoadScreen.LoadScreen.resources}
    label1: &Label;
    label2: &Label;
    label3: &Label;
    label4: &Label;
    button1: Button;
    l1: &Label;
    {$include ULoadScreen.LoadScreen.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure LoadScreen.l1_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure LoadScreen.label2_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure LoadScreen.button1_Click(sender: Object; e: EventArgs);
begin
  self.Close();
end;

begin
 
end.
