procedure InitializeComponent;
    begin
        self.Pen := new System.Windows.Forms.Button();
        self.Thickness := new System.Windows.Forms.TrackBar();
        self.colorDialog1 := new System.Windows.Forms.ColorDialog();
        self.Color := new System.Windows.Forms.Button();
        self.button1 := new System.Windows.Forms.Button();
        self.Circle := new System.Windows.Forms.Button();
        self.SecondColor := new System.Windows.Forms.Button();
        self.Erase := new System.Windows.Forms.Button();
        self.ToolParam := new System.Windows.Forms.TabControl();
        self.tabPage1 := new System.Windows.Forms.TabPage();
        self.panel1 := new System.Windows.Forms.Panel();
        self.button3 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.radioButton2 := new System.Windows.Forms.RadioButton();
        self.radioButton1 := new System.Windows.Forms.RadioButton();
        self.comboBox2 := new System.Windows.Forms.ComboBox();
        self.checkBox1 := new System.Windows.Forms.CheckBox();
        self.label2 := new System.Windows.Forms.Label();
        self.comboBox1 := new System.Windows.Forms.ComboBox();
        self.label1 := new System.Windows.Forms.Label();
        self.button4 := new System.Windows.Forms.Button();
        self.button5 := new System.Windows.Forms.Button();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.radioButton3 := new System.Windows.Forms.RadioButton();
        self.label5 := new System.Windows.Forms.Label();
        self.label7 := new System.Windows.Forms.Label();
        (System.ComponentModel.ISupportInitialize(self.Thickness)).BeginInit();
        self.ToolParam.SuspendLayout();
        self.tabPage1.SuspendLayout();
        self.panel1.SuspendLayout();
        self.SuspendLayout();
        // 
        // Pen
        // 
        self.Pen.Location := new System.Drawing.Point(12, 12);
        self.Pen.Name := 'Pen';
        self.Pen.Size := new System.Drawing.Size(96, 46);
        self.Pen.TabIndex := 0;
        self.Pen.Text := 'Карандаш';
        self.Pen.UseVisualStyleBackColor := true;
        self.Pen.Click += Pen_Click;
        // 
        // Thickness
        // 
        self.Thickness.Location := new System.Drawing.Point(12, 614);
        self.Thickness.Maximum := 20;
        self.Thickness.Name := 'Thickness';
        self.Thickness.Size := new System.Drawing.Size(257, 45);
        self.Thickness.TabIndex := 1;
        self.Thickness.Scroll += trackBar1_Scroll;
        // 
        // colorDialog1
        // 
        self.colorDialog1.Color := System.Drawing.Color.Blue;
        // 
        // Color
        // 
        self.Color.BackColor := System.Drawing.Color.Black;
        self.Color.ForeColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(255)))), (System.Int32((System.Byte(192)))), (System.Int32((System.Byte(192)))));
        self.Color.Location := new System.Drawing.Point(13, 655);
        self.Color.Name := 'Color';
        self.Color.Size := new System.Drawing.Size(114, 43);
        self.Color.TabIndex := 2;
        self.Color.UseCompatibleTextRendering := true;
        self.Color.UseVisualStyleBackColor := false;
        self.Color.Click += Color_Click;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 118);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(96, 46);
        self.button1.TabIndex := 3;
        self.button1.Text := 'Прямоугольник';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Circle
        // 
        self.Circle.Location := new System.Drawing.Point(12, 170);
        self.Circle.Name := 'Circle';
        self.Circle.Size := new System.Drawing.Size(96, 46);
        self.Circle.TabIndex := 4;
        self.Circle.Text := 'Окружность';
        self.Circle.UseVisualStyleBackColor := true;
        self.Circle.Click += Circle_Click;
        // 
        // SecondColor
        // 
        self.SecondColor.BackColor := System.Drawing.Color.White;
        self.SecondColor.ForeColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(255)))), (System.Int32((System.Byte(192)))), (System.Int32((System.Byte(192)))));
        self.SecondColor.Location := new System.Drawing.Point(133, 655);
        self.SecondColor.Name := 'SecondColor';
        self.SecondColor.Size := new System.Drawing.Size(133, 43);
        self.SecondColor.TabIndex := 5;
        self.SecondColor.UseCompatibleTextRendering := true;
        self.SecondColor.UseVisualStyleBackColor := false;
        self.SecondColor.Click += SecondColor_Click;
        // 
        // Erase
        // 
        self.Erase.Location := new System.Drawing.Point(11, 275);
        self.Erase.Name := 'Erase';
        self.Erase.Size := new System.Drawing.Size(96, 46);
        self.Erase.TabIndex := 6;
        self.Erase.Text := 'Стерка';
        self.Erase.UseVisualStyleBackColor := true;
        self.Erase.Click += Erase_Click;
        // 
        // ToolParam
        // 
        self.ToolParam.Controls.Add(self.tabPage1);
        self.ToolParam.Location := new System.Drawing.Point(129, 64);
        self.ToolParam.Name := 'ToolParam';
        self.ToolParam.SelectedIndex := 0;
        self.ToolParam.Size := new System.Drawing.Size(144, 354);
        self.ToolParam.TabIndex := 8;
        self.ToolParam.Visible := false;
        // 
        // tabPage1
        // 
        self.tabPage1.Controls.Add(self.panel1);
        self.tabPage1.Controls.Add(self.checkBox1);
        self.tabPage1.Location := new System.Drawing.Point(4, 22);
        self.tabPage1.Name := 'tabPage1';
        self.tabPage1.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage1.Size := new System.Drawing.Size(136, 328);
        self.tabPage1.TabIndex := 0;
        self.tabPage1.Text := 'Заливка';
        self.tabPage1.UseVisualStyleBackColor := true;
        self.tabPage1.Click += tabPage1_Click;
        // 
        // panel1
        // 
        self.panel1.Controls.Add(self.label3);
        self.panel1.Controls.Add(self.radioButton3);
        self.panel1.Controls.Add(self.label4);
        self.panel1.Controls.Add(self.button2);
        self.panel1.Controls.Add(self.button3);
        self.panel1.Controls.Add(self.radioButton2);
        self.panel1.Controls.Add(self.radioButton1);
        self.panel1.Controls.Add(self.comboBox2);
        self.panel1.Location := new System.Drawing.Point(0, 45);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(133, 279);
        self.panel1.TabIndex := 2;
        self.panel1.Visible := false;
        // 
        // button3
        // 
        self.button3.BackColor := System.Drawing.Color.White;
        self.button3.Location := new System.Drawing.Point(6, 245);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(123, 21);
        self.button3.TabIndex := 4;
        self.button3.UseVisualStyleBackColor := false;
        self.button3.Click += button3_Click;
        // 
        // button2
        // 
        self.button2.BackColor := System.Drawing.Color.Black;
        self.button2.Location := new System.Drawing.Point(6, 202);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(123, 23);
        self.button2.TabIndex := 3;
        self.button2.UseVisualStyleBackColor := false;
        self.button2.Click += button2_Click;
        // 
        // radioButton2
        // 
        self.radioButton2.Location := new System.Drawing.Point(6, 101);
        self.radioButton2.Name := 'radioButton2';
        self.radioButton2.Size := new System.Drawing.Size(123, 36);
        self.radioButton2.TabIndex := 2;
        self.radioButton2.Text := 'Черно-белый градиент';
        self.radioButton2.UseVisualStyleBackColor := true;
        self.radioButton2.CheckedChanged += radioButton2_CheckedChanged;
        // 
        // radioButton1
        // 
        self.radioButton1.Location := new System.Drawing.Point(6, 39);
        self.radioButton1.Name := 'radioButton1';
        self.radioButton1.Size := new System.Drawing.Size(104, 24);
        self.radioButton1.TabIndex := 1;
        self.radioButton1.Text := 'Штриховая';
        self.radioButton1.UseVisualStyleBackColor := true;
        self.radioButton1.CheckedChanged += radioButton1_CheckedChanged;
        // 
        // comboBox2
        // 
        self.comboBox2.FormattingEnabled := true;
        self.comboBox2.Items.AddRange(new System.Object[5]('Горизонтальная', 'Вертикальная', 'Диагональная', 'В клетку', ''));
        self.comboBox2.Location := new System.Drawing.Point(6, 69);
        self.comboBox2.Name := 'comboBox2';
        self.comboBox2.Size := new System.Drawing.Size(123, 21);
        self.comboBox2.TabIndex := 0;
        self.comboBox2.SelectedIndexChanged += comboBox2_SelectedIndexChanged;
        // 
        // checkBox1
        // 
        self.checkBox1.Location := new System.Drawing.Point(6, 15);
        self.checkBox1.Name := 'checkBox1';
        self.checkBox1.Size := new System.Drawing.Size(104, 24);
        self.checkBox1.TabIndex := 1;
        self.checkBox1.Text := 'Заливка';
        self.checkBox1.UseVisualStyleBackColor := true;
        self.checkBox1.CheckedChanged += checkBox1_CheckedChanged;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(135, 12);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(100, 14);
        self.label2.TabIndex := 3;
        self.label2.Text := 'Контур';
        self.label2.Click += label2_Click;
        // 
        // comboBox1
        // 
        self.comboBox1.FormattingEnabled := true;
        self.comboBox1.Items.AddRange(new System.Object[5]('Сплошной', 'Штрих', 'Пунктир', 'Штрих-пунктир', 'Альтернативный штрих-пунктир'));
        self.comboBox1.Location := new System.Drawing.Point(135, 32);
        self.comboBox1.Name := 'comboBox1';
        self.comboBox1.Size := new System.Drawing.Size(121, 21);
        self.comboBox1.TabIndex := 0;
        self.comboBox1.Text := 'Сплошной';
        self.comboBox1.SelectedIndexChanged += comboBox1_SelectedIndexChanged;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(66, 597);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(169, 14);
        self.label1.TabIndex := 9;
        self.label1.Text := 'Толщина контура линий';
        self.label1.Click += label1_Click;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(13, 64);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(95, 48);
        self.button4.TabIndex := 2;
        self.button4.Text := 'Прямая';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // button5
        // 
        self.button5.Location := new System.Drawing.Point(12, 222);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(95, 46);
        self.button5.TabIndex := 10;
        self.button5.Text := 'Эллипс';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(10, 185);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(100, 14);
        self.label3.TabIndex := 4;
        self.label3.Text := 'Цвет заливки';
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(10, 228);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(100, 14);
        self.label4.TabIndex := 5;
        self.label4.Text := 'Цвет линий';
        self.label4.Click += label4_Click;
        // 
        // radioButton3
        // 
        self.radioButton3.Checked := true;
        self.radioButton3.Location := new System.Drawing.Point(6, 9);
        self.radioButton3.Name := 'radioButton3';
        self.radioButton3.Size := new System.Drawing.Size(104, 24);
        self.radioButton3.TabIndex := 6;
        self.radioButton3.TabStop := true;
        self.radioButton3.Text := 'Сплошная';
        self.radioButton3.UseVisualStyleBackColor := true;
        self.radioButton3.CheckedChanged += radioButton3_CheckedChanged;
        // 
        // label5
        // 
        self.label5.Location := new System.Drawing.Point(13, 701);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(114, 23);
        self.label5.TabIndex := 11;
        self.label5.Text := 'Основной цвет';
        self.label5.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // label7
        // 
        self.label7.Location := new System.Drawing.Point(135, 701);
        self.label7.Name := 'label7';
        self.label7.Size := new System.Drawing.Size(127, 23);
        self.label7.TabIndex := 13;
        self.label7.Text := 'Дополнительный цвет';
        self.label7.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // ToolBarForm
        // 
        self.ClientSize := new System.Drawing.Size(278, 720);
        self.ControlBox := false;
        self.Controls.Add(self.label7);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.button5);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.comboBox1);
        self.Controls.Add(self.ToolParam);
        self.Controls.Add(self.Erase);
        self.Controls.Add(self.SecondColor);
        self.Controls.Add(self.Circle);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.Color);
        self.Controls.Add(self.Thickness);
        self.Controls.Add(self.Pen);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedToolWindow;
        self.Location := new System.Drawing.Point(0, 115);
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'ToolBarForm';
        self.StartPosition := System.Windows.Forms.FormStartPosition.Manual;
        self.Text := 'Панель инструментов';
        (System.ComponentModel.ISupportInitialize(self.Thickness)).EndInit();
        self.ToolParam.ResumeLayout(false);
        self.tabPage1.ResumeLayout(false);
        self.panel1.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
