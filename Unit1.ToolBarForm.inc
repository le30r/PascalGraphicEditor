procedure InitializeComponent;
    begin
        self.SuspendLayout();
        // 
        // ToolBarForm
        // 
        self.ClientSize := new System.Drawing.Size(120, 720);
        self.ControlBox := false;
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedToolWindow;
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'ToolBarForm';
        self.Text := 'ToolBar';
        self.ResumeLayout(false);
    end;
