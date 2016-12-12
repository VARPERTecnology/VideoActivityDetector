#pragma once

#include <atlstr.h>
#include <msclr\marshal.h>

#include <opencv\cv.h>
#include <opencv\highgui.h>

using namespace cv;
using namespace msclr::interop;

namespace DeteccionDeActividad
{

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Windows::Forms::DataVisualization::Charting;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for VideoAnalyser
/// </summary>
public ref class VideoAnalyser : public System::Windows::Forms::Form
{
	public:
	VideoAnalyser(void)
	{
		InitializeComponent();

		continueInitializing();
		//
		//TODO: Add the constructor code here
		//
	}

	protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~VideoAnalyser()
	{
		if (components)
		{
			delete components;
		}
	}

	private: 

	System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	System::Windows::Forms::PictureBox^  pictureBox1;
	System::Windows::Forms::Button^  btnLoadVideo;
	System::Windows::Forms::DataVisualization::Charting::Chart^  chartActivity;

	void continueInitializing();


	/// <summary>
	/// Required designer variable.
	/// </summary>
	System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void InitializeComponent(void)
	{
		System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
		System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
		System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->btnLoadVideo = (gcnew System::Windows::Forms::Button());
		this->chartActivity = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
		this->tableLayoutPanel1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartActivity))->BeginInit();
		this->SuspendLayout();
		// 
		// tableLayoutPanel1
		// 
		this->tableLayoutPanel1->ColumnCount = 1;
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																							  100)));
		this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
		this->tableLayoutPanel1->Controls->Add(this->btnLoadVideo, 0, 2);
		this->tableLayoutPanel1->Controls->Add(this->chartActivity, 0, 1);
		this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
		this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		this->tableLayoutPanel1->RowCount = 3;
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
		this->tableLayoutPanel1->Size = System::Drawing::Size(371, 311);
		this->tableLayoutPanel1->TabIndex = 0;
		// 
		// pictureBox1
		// 
		this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->pictureBox1->Location = System::Drawing::Point(3, 3);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(365, 219);
		this->pictureBox1->TabIndex = 0;
		this->pictureBox1->TabStop = false;
		// 
		// btnLoadVideo
		// 
		this->btnLoadVideo->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
		this->btnLoadVideo->AutoSize = true;
		this->btnLoadVideo->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		this->btnLoadVideo->Location = System::Drawing::Point(146, 285);
		this->btnLoadVideo->Name = L"btnLoadVideo";
		this->btnLoadVideo->Size = System::Drawing::Size(78, 23);
		this->btnLoadVideo->TabIndex = 1;
		this->btnLoadVideo->Text = L"Cargar Video";
		this->btnLoadVideo->UseVisualStyleBackColor = true;
		this->btnLoadVideo->Click += gcnew System::EventHandler(this, &VideoAnalyser::btnLoadVideo_Click);
		// 
		// chartActivity
		// 
		chartArea1->Name = L"ChartArea1";
		this->chartActivity->ChartAreas->Add(chartArea1);
		legend1->Name = L"Legend1";
		this->chartActivity->Legends->Add(legend1);
		this->chartActivity->Location = System::Drawing::Point(3, 228);
		this->chartActivity->Name = L"chartActivity";
		series1->ChartArea = L"ChartArea1";
		series1->Legend = L"Legend1";
		series1->Name = L"Series1";
		this->chartActivity->Series->Add(series1);
		this->chartActivity->Size = System::Drawing::Size(365, 50);
		this->chartActivity->TabIndex = 2;
		this->chartActivity->Text = L"chart1";
		// 
		// VideoAnalyser
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(395, 335);
		this->Controls->Add(this->tableLayoutPanel1);
		this->Name = L"VideoAnalyser";
		this->Text = L"VideoAnalyser";
		this->tableLayoutPanel1->ResumeLayout(false);
		this->tableLayoutPanel1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartActivity))->EndInit();
		this->ResumeLayout(false);

	}
#pragma endregion
	
	private: System::Void btnLoadVideo_Click(System::Object^  sender, System::EventArgs^  e);
};
}
