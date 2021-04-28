procedure InitializeComponent;
    begin
        self.TWidth := new System.Windows.Forms.TextBox();
        self.THeight := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.BOk := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // TWidth
        // 
        self.TWidth.Location := new System.Drawing.Point(84, 12);
        self.TWidth.Name := 'TWidth';
        self.TWidth.Size := new System.Drawing.Size(194, 20);
        self.TWidth.TabIndex := 0;
        // 
        // THeight
        // 
        self.THeight.Location := new System.Drawing.Point(84, 38);
        self.THeight.Name := 'THeight';
        self.THeight.Size := new System.Drawing.Size(194, 20);
        self.THeight.TabIndex := 1;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(26, 15);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(52, 23);
        self.label1.TabIndex := 2;
        self.label1.Text := 'Width';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(26, 41);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(52, 23);
        self.label2.TabIndex := 3;
        self.label2.Text := 'Height';
        // 
        // BOk
        // 
        self.BOk.Location := new System.Drawing.Point(203, 64);
        self.BOk.Name := 'BOk';
        self.BOk.Size := new System.Drawing.Size(75, 23);
        self.BOk.TabIndex := 4;
        self.BOk.Text := 'ОК';
        self.BOk.UseVisualStyleBackColor := true;
        self.BOk.Click += BOk_Click;
        // 
        // SetWindowSizeForm
        // 
        self.ClientSize := new System.Drawing.Size(290, 99);
        self.Controls.Add(self.BOk);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.THeight);
        self.Controls.Add(self.TWidth);
        self.Name := 'SetWindowSizeForm';
        self.Text := 'Set Window Size';

        self.ResumeLayout(false);
        self.PerformLayout();
    end;
