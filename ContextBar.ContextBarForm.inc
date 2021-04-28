procedure InitializeComponent;
    begin
        self.BNew := new System.Windows.Forms.Button();
        self.BSave := new System.Windows.Forms.Button();
        self.BLoad := new System.Windows.Forms.Button();
        self.BResizeWindow := new System.Windows.Forms.Button();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.openFileDialog := new System.Windows.Forms.OpenFileDialog();
        self.label3 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // BNew
        // 
        self.BNew.Location := new System.Drawing.Point(12, 4);
        self.BNew.Name := 'BNew';
        self.BNew.Size := new System.Drawing.Size(54, 45);
        self.BNew.TabIndex := 0;
        self.BNew.Text := 'Новый';
        self.BNew.UseVisualStyleBackColor := true;
        self.BNew.Click += button1_Click;
        // 
        // BSave
        // 
        self.BSave.Location := new System.Drawing.Point(72, 4);
        self.BSave.Name := 'BSave';
        self.BSave.Size := new System.Drawing.Size(69, 45);
        self.BSave.TabIndex := 1;
        self.BSave.Text := 'Сохранить';
        self.BSave.UseVisualStyleBackColor := true;
        self.BSave.Click += BSave_Click;
        // 
        // BLoad
        // 
        self.BLoad.Location := new System.Drawing.Point(147, 4);
        self.BLoad.Name := 'BLoad';
        self.BLoad.Size := new System.Drawing.Size(72, 45);
        self.BLoad.TabIndex := 2;
        self.BLoad.Text := 'Загрузить';
        self.BLoad.UseVisualStyleBackColor := true;
        self.BLoad.Click += BLoad_Click;
        // 
        // BResizeWindow
        // 
        self.BResizeWindow.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.BResizeWindow.Location := new System.Drawing.Point(445, 4);
        self.BResizeWindow.Name := 'BResizeWindow';
        self.BResizeWindow.Size := new System.Drawing.Size(106, 45);
        self.BResizeWindow.TabIndex := 4;
        self.BResizeWindow.Text := 'Установить размер холста';
        self.BResizeWindow.UseVisualStyleBackColor := true;
        self.BResizeWindow.Click += BResizeWindow_Click;
        // 
        // saveFileDialog1
        // 
        self.saveFileDialog1.Filter := 'Файлы графического редактора Tician|*.tca|Bitmap-файлы|*.bmp';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(319, 4);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(100, 20);
        self.textBox1.TabIndex := 5;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(319, 29);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(100, 20);
        self.textBox2.TabIndex := 6;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(264, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(49, 15);
        self.label1.TabIndex := 7;
        self.label1.Text := 'Высота';
        self.label1.Click += label1_Click;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(264, 32);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(49, 15);
        self.label2.TabIndex := 8;
        self.label2.Text := 'Ширина';
        // 
        // openFileDialog
        // 
        self.openFileDialog.Filter := 'Файлы графического редактора Tician|*.tca';
        self.openFileDialog.Title := 'Открыть файл';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(557, 20);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(204, 23);
        self.label3.TabIndex := 9;
        self.label3.Text := 'Ошибка при вводе данных!';
        self.label3.Visible := false;
        // 
        // ContextBarForm
        // 
        self.ClientSize := new System.Drawing.Size(1048, 55);
        self.ControlBox := false;
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.BResizeWindow);
        self.Controls.Add(self.BLoad);
        self.Controls.Add(self.BSave);
        self.Controls.Add(self.BNew);
        self.Cursor := System.Windows.Forms.Cursors.Arrow;
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedToolWindow;
        self.Location := new System.Drawing.Point(0, 35);
        self.MaximizeBox := false;
        self.Name := 'ContextBarForm';
        self.StartPosition := System.Windows.Forms.FormStartPosition.Manual;
        self.Text := 'TicianGE - untitled';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
