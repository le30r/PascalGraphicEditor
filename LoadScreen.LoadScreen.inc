procedure InitializeComponent;
    begin
        self.l1 := new System.Windows.Forms.Label();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // l1
        // 
        self.l1.Font := new System.Drawing.Font('Arial Narrow', 21.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.l1.Location := new System.Drawing.Point(0, 9);
        self.l1.Name := 'l1';
        self.l1.Size := new System.Drawing.Size(784, 40);
        self.l1.TabIndex := 0;
        self.l1.Text := 'Tician - Графический редактор';
        self.l1.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        self.l1.Click += l1_Click;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Arial', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(0, 105);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(784, 34);
        self.label1.TabIndex := 1;
        self.label1.Text := 'Курсовая работа';
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Arial', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(0, 139);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(784, 34);
        self.label2.TabIndex := 2;
        self.label2.Text := 'студента 1 курса';
        self.label2.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        self.label2.Click += label2_Click;
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Arial', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.Location := new System.Drawing.Point(0, 173);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(784, 34);
        self.label3.TabIndex := 3;
        self.label3.Text := 'Маринина И.Д., группа 945';
        self.label3.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Arial', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.Location := new System.Drawing.Point(0, 288);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(784, 34);
        self.label4.TabIndex := 4;
        self.label4.Text := 'Рязань, 2020';
        self.label4.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.Location := new System.Drawing.Point(312, 330);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(163, 32);
        self.button1.TabIndex := 5;
        self.button1.Text := 'Начать';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // LoadScreen
        // 
        self.ClientSize := new System.Drawing.Size(783, 374);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.l1);
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'LoadScreen';
        self.Text := 'TicianGE - Стартовый экран';
        self.TopMost := true;
        self.ResumeLayout(false);
    end;
