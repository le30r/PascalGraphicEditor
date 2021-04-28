Unit aaaa;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
  {$region FormDesigner}
  private
    {$resource aaaa.Form1.resources}
    {$include aaaa.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

end.
