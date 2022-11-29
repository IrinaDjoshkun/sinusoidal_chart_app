#pragma once
#include <iostream>
#include <ostream>
#include <fstream>
#include <string>

std::string name;

namespace chartrealtimesin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::Button^ button_build;
	protected:

	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Button^ button_stop;
	private: System::Windows::Forms::Label^ label_amplitude;
	private: System::Windows::Forms::Label^ label_Hz;
	private: System::Windows::Forms::NumericUpDown^ numeric_amplitude;
	private: System::Windows::Forms::NumericUpDown^ numeric_Hz;
	private: System::Windows::Forms::Button^ button_apply;
	private: System::Windows::Forms::Button^ button_save;
	private: System::Windows::Forms::Button^ button_save_data;
	private: System::Windows::Forms::GroupBox^ groupBox_chart;

	private: System::Windows::Forms::Button^ button_open_file;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox;
	private: System::Windows::Forms::PictureBox^ pictureBox;

	private: System::Windows::Forms::Button^ button_open_img;
	private: System::Windows::Forms::GroupBox^ groupBox_start;
	private: System::Windows::Forms::GroupBox^ groupBox_parameters;
	private: System::Windows::Forms::GroupBox^ groupBox_save;
	private: System::Windows::Forms::Button^ button_close;







	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button_build = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->button_stop = (gcnew System::Windows::Forms::Button());
			this->label_amplitude = (gcnew System::Windows::Forms::Label());
			this->label_Hz = (gcnew System::Windows::Forms::Label());
			this->numeric_amplitude = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_Hz = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_apply = (gcnew System::Windows::Forms::Button());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->button_save_data = (gcnew System::Windows::Forms::Button());
			this->groupBox_chart = (gcnew System::Windows::Forms::GroupBox());
			this->button_open_file = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->button_open_img = (gcnew System::Windows::Forms::Button());
			this->groupBox_start = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_parameters = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_save = (gcnew System::Windows::Forms::GroupBox());
			this->button_close = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_amplitude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Hz))->BeginInit();
			this->groupBox_chart->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->groupBox_start->SuspendLayout();
			this->groupBox_parameters->SuspendLayout();
			this->groupBox_save->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea4);
			legend4->Enabled = false;
			legend4->Name = L"Legend1";
			this->chart->Legends->Add(legend4);
			this->chart->Location = System::Drawing::Point(6, 28);
			this->chart->Name = L"chart";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart->Series->Add(series4);
			this->chart->Size = System::Drawing::Size(728, 276);
			this->chart->TabIndex = 0;
			this->chart->Text = L"Chart";
			this->chart->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::chart_MouseWheel);
			// 
			// button_build
			// 
			this->button_build->Location = System::Drawing::Point(16, 28);
			this->button_build->Name = L"button_build";
			this->button_build->Size = System::Drawing::Size(121, 23);
			this->button_build->TabIndex = 1;
			this->button_build->Text = L"start";
			this->button_build->UseVisualStyleBackColor = true;
			this->button_build->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// button_stop
			// 
			this->button_stop->Location = System::Drawing::Point(16, 57);
			this->button_stop->Name = L"button_stop";
			this->button_stop->Size = System::Drawing::Size(121, 23);
			this->button_stop->TabIndex = 2;
			this->button_stop->Text = L"stop";
			this->button_stop->UseVisualStyleBackColor = true;
			this->button_stop->Click += gcnew System::EventHandler(this, &MyForm::button_stop_Click);
			// 
			// label_amplitude
			// 
			this->label_amplitude->AutoSize = true;
			this->label_amplitude->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_amplitude->Location = System::Drawing::Point(21, 28);
			this->label_amplitude->Name = L"label_amplitude";
			this->label_amplitude->Size = System::Drawing::Size(33, 20);
			this->label_amplitude->TabIndex = 3;
			this->label_amplitude->Text = L"A =";
			// 
			// label_Hz
			// 
			this->label_Hz->AutoSize = true;
			this->label_Hz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Hz->Location = System::Drawing::Point(21, 62);
			this->label_Hz->Name = L"label_Hz";
			this->label_Hz->Size = System::Drawing::Size(42, 20);
			this->label_Hz->TabIndex = 4;
			this->label_Hz->Text = L"Hz =";
			// 
			// numeric_amplitude
			// 
			this->numeric_amplitude->Location = System::Drawing::Point(60, 28);
			this->numeric_amplitude->Name = L"numeric_amplitude";
			this->numeric_amplitude->Size = System::Drawing::Size(102, 20);
			this->numeric_amplitude->TabIndex = 5;
			// 
			// numeric_Hz
			// 
			this->numeric_Hz->Location = System::Drawing::Point(69, 62);
			this->numeric_Hz->Name = L"numeric_Hz";
			this->numeric_Hz->Size = System::Drawing::Size(93, 20);
			this->numeric_Hz->TabIndex = 6;
			// 
			// button_apply
			// 
			this->button_apply->Location = System::Drawing::Point(16, 100);
			this->button_apply->Name = L"button_apply";
			this->button_apply->Size = System::Drawing::Size(146, 23);
			this->button_apply->TabIndex = 7;
			this->button_apply->Text = L"apply";
			this->button_apply->UseVisualStyleBackColor = true;
			this->button_apply->Click += gcnew System::EventHandler(this, &MyForm::button_apply_Click);
			// 
			// button_save
			// 
			this->button_save->Location = System::Drawing::Point(24, 19);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(151, 23);
			this->button_save->TabIndex = 8;
			this->button_save->Text = L"save as img";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Click += gcnew System::EventHandler(this, &MyForm::button_save_Click);
			// 
			// button_save_data
			// 
			this->button_save_data->Location = System::Drawing::Point(25, 135);
			this->button_save_data->Name = L"button_save_data";
			this->button_save_data->Size = System::Drawing::Size(151, 23);
			this->button_save_data->TabIndex = 9;
			this->button_save_data->Text = L"save to file";
			this->button_save_data->UseVisualStyleBackColor = true;
			this->button_save_data->Click += gcnew System::EventHandler(this, &MyForm::button_save_data_Click);
			// 
			// groupBox_chart
			// 
			this->groupBox_chart->Controls->Add(this->chart);
			this->groupBox_chart->Location = System::Drawing::Point(12, 12);
			this->groupBox_chart->Name = L"groupBox_chart";
			this->groupBox_chart->Size = System::Drawing::Size(741, 310);
			this->groupBox_chart->TabIndex = 10;
			this->groupBox_chart->TabStop = false;
			this->groupBox_chart->Text = L"Chart";
			// 
			// button_open_file
			// 
			this->button_open_file->Location = System::Drawing::Point(25, 164);
			this->button_open_file->Name = L"button_open_file";
			this->button_open_file->Size = System::Drawing::Size(151, 23);
			this->button_open_file->TabIndex = 12;
			this->button_open_file->Text = L"open file";
			this->button_open_file->UseVisualStyleBackColor = true;
			this->button_open_file->Click += gcnew System::EventHandler(this, &MyForm::button_open_file_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->textBox, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 328);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(741, 160);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// textBox
			// 
			this->textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox->Location = System::Drawing::Point(3, 3);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox->Size = System::Drawing::Size(364, 154);
			this->textBox->TabIndex = 0;
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox->Location = System::Drawing::Point(373, 3);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(365, 154);
			this->pictureBox->TabIndex = 1;
			this->pictureBox->TabStop = false;
			this->pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
			// 
			// button_open_img
			// 
			this->button_open_img->Location = System::Drawing::Point(24, 48);
			this->button_open_img->Name = L"button_open_img";
			this->button_open_img->Size = System::Drawing::Size(151, 23);
			this->button_open_img->TabIndex = 14;
			this->button_open_img->Text = L"open img";
			this->button_open_img->UseVisualStyleBackColor = true;
			this->button_open_img->Click += gcnew System::EventHandler(this, &MyForm::button_open_img_Click);
			// 
			// groupBox_start
			// 
			this->groupBox_start->Controls->Add(this->button_stop);
			this->groupBox_start->Controls->Add(this->button_build);
			this->groupBox_start->Location = System::Drawing::Point(759, 12);
			this->groupBox_start->Name = L"groupBox_start";
			this->groupBox_start->Size = System::Drawing::Size(200, 100);
			this->groupBox_start->TabIndex = 15;
			this->groupBox_start->TabStop = false;
			this->groupBox_start->Text = L"Start/Stop";
			// 
			// groupBox_parameters
			// 
			this->groupBox_parameters->Controls->Add(this->label_amplitude);
			this->groupBox_parameters->Controls->Add(this->label_Hz);
			this->groupBox_parameters->Controls->Add(this->numeric_Hz);
			this->groupBox_parameters->Controls->Add(this->numeric_amplitude);
			this->groupBox_parameters->Controls->Add(this->button_apply);
			this->groupBox_parameters->Location = System::Drawing::Point(759, 118);
			this->groupBox_parameters->Name = L"groupBox_parameters";
			this->groupBox_parameters->Size = System::Drawing::Size(200, 141);
			this->groupBox_parameters->TabIndex = 16;
			this->groupBox_parameters->TabStop = false;
			this->groupBox_parameters->Text = L"Parameters";
			// 
			// groupBox_save
			// 
			this->groupBox_save->Controls->Add(this->button_close);
			this->groupBox_save->Controls->Add(this->button_save);
			this->groupBox_save->Controls->Add(this->button_open_img);
			this->groupBox_save->Controls->Add(this->button_save_data);
			this->groupBox_save->Controls->Add(this->button_open_file);
			this->groupBox_save->Location = System::Drawing::Point(759, 274);
			this->groupBox_save->Name = L"groupBox_save";
			this->groupBox_save->Size = System::Drawing::Size(200, 211);
			this->groupBox_save->TabIndex = 17;
			this->groupBox_save->TabStop = false;
			this->groupBox_save->Text = L"Save/Open";
			// 
			// button_close
			// 
			this->button_close->Location = System::Drawing::Point(25, 78);
			this->button_close->Name = L"button_close";
			this->button_close->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button_close->Size = System::Drawing::Size(150, 23);
			this->button_close->TabIndex = 15;
			this->button_close->Text = L"close img";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm::button_close_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(971, 500);
			this->Controls->Add(this->groupBox_save);
			this->Controls->Add(this->groupBox_parameters);
			this->Controls->Add(this->groupBox_start);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->groupBox_chart);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_amplitude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_Hz))->EndInit();
			this->groupBox_chart->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->groupBox_start->ResumeLayout(false);
			this->groupBox_parameters->ResumeLayout(false);
			this->groupBox_parameters->PerformLayout();
			this->groupBox_save->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion
	private: double Pi = 3.14;
	private: double A = 7000; double Hz = 50; double x;
	private: bool dragging = false; 
	private: Point point;

	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		timer->Interval = 50;

		numeric_amplitude->Maximum = 10000;
		numeric_amplitude->Minimum = 100;
		numeric_Hz->Maximum = 100;
		numeric_Hz->Minimum = 0;

		chart->Series[0]->Points->AddXY(x, A * Math::Sin(2 * Pi * Hz * x));

		chart->ChartAreas[0]->AxisY->Maximum = 15000;
		chart->ChartAreas[0]->AxisY->Minimum = -15000;

		if (chart->Series[0]->Points->Count > 500)
			chart->Series[0]->Points->RemoveAt(0);

		chart->ChartAreas[0]->AxisX->Minimum = chart->Series[0]->Points[0]->XValue;
		chart->ChartAreas[0]->AxisX->Maximum = x;
		
		x += 0.1;
	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		timer->Start();
	}
	private: System::Void button_stop_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		timer->Stop();
	}

	private: System::Void button_apply_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		A = Convert::ToInt32(numeric_amplitude->Value);
		Hz = Convert::ToInt32(numeric_Hz->Value);
	}
	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e) 
	{
			chart->SaveImage("potok.jpeg", ChartImageFormat::Jpeg);
	}
	private: System::Void button_save_data_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		std::ofstream record;
		record.open("potok.txt", std::ofstream::app);
		if (record.is_open())
		{
			record << "Amplitude = " << A << " " << "Hz = " << Hz << " " << std::endl;
		}
		record.close();
	}

	private: System::Void chart_MouseWheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (e->Delta > 0)
		{
			chart->ChartAreas[0]->AxisY->Maximum = chart->ChartAreas[0]->AxisY->Maximum + 10;
			chart->ChartAreas[0]->AxisY->Minimum = chart->ChartAreas[0]->AxisY->Minimum - 10; 
			chart->ChartAreas[0]->AxisX->Maximum = chart->ChartAreas[0]->AxisX->Maximum + 1;
			chart->ChartAreas[0]->AxisX->Minimum = chart->ChartAreas[0]->AxisX->Minimum - 1;
		}
		else
		{
			chart->ChartAreas[0]->AxisY->Maximum = chart->ChartAreas[0]->AxisY->Maximum - 10;
			chart->ChartAreas[0]->AxisY->Minimum = chart->ChartAreas[0]->AxisY->Minimum + 10; 
			chart->ChartAreas[0]->AxisX->Maximum = chart->ChartAreas[0]->AxisX->Maximum - 1;
			chart->ChartAreas[0]->AxisX->Minimum = chart->ChartAreas[0]->AxisX->Minimum + 1;
		}
	}

	private: System::Void button_open_file_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFileDialog ofd;
		ofd.FileName = "potok.txt";
		textBox->Text = File::ReadAllText(ofd.FileName);
	}

	private: System::Void button_open_img_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFileDialog img;
		img.FileName = "potok.jpeg";
		pictureBox->Image = Image::FromFile(img.FileName);
	}

	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pictureBox->Image = nullptr;
		std::ofstream img("potok.jpeg");
		if (img.is_open())
		{
			img.close();
		}
		img.close();
	}
};
}
