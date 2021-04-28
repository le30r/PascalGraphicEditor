{$apptype windows}
{$reference 'System.Windows.Forms.dll'}
{$reference 'System.Drawing.dll'}

uses ToolBar, ContextBar,
    System.Windows.Forms,
    System.Drawing;

var
   FToolBar: ToolBarForm;

begin
      Application.EnableVisualStyles();
      Application.Run(new ContextBarForm);

       
end.