procedure InitializeComponent;
    begin
        self.SuspendLayout();
        // 
        // ToolBar
        // 
        self.ClientSize := new System.Drawing.Size(120, 720);
        self.ControlBox := false;
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedToolWindow;
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'ToolBar';
        self.Text := 'ToolBar';
        self.ResumeLayout(false);
    end;
