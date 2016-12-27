#include "VideoAnalyser.h"

void DeteccionDeActividad::VideoAnalyser::continueInitializing()
{
	//Cambiar propiedades del eje X
	chartActivity->ChartAreas[0]->AxisX->LineWidth = 0;
	chartActivity->ChartAreas[0]->AxisX->LabelStyle->Enabled = false;
	chartActivity->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
	chartActivity->ChartAreas[0]->AxisX->MinorGrid->Enabled = false;
	chartActivity->ChartAreas[0]->AxisX->MajorTickMark->Enabled = false;
	chartActivity->ChartAreas[0]->AxisX->MinorTickMark->Enabled = false;

	//Cambiar propiedades del eje Y
	chartActivity->ChartAreas[0]->AxisY->LineWidth = 0;
	chartActivity->ChartAreas[0]->AxisY->LabelStyle->Enabled = false;
	chartActivity->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
	chartActivity->ChartAreas[0]->AxisY->MinorGrid->Enabled = false;
	chartActivity->ChartAreas[0]->AxisY->MajorTickMark->Enabled = false;
	chartActivity->ChartAreas[0]->AxisY->MinorTickMark->Enabled = false;

	chartActivity->Legends->Clear();
	//chartActivity->BorderColor = SystemColors::InactiveBorder;
	chartActivity->BackColor = SystemColors::Control;

	chartActivity->ChartAreas[0]->BackColor = SystemColors::Control;
}

System::Void DeteccionDeActividad::VideoAnalyser::btnLoadVideo_Click(System::Object ^ sender, System::EventArgs ^ e)
{

	System::Windows::Forms::OpenFileDialog ^fileDialog;

	fileDialog = gcnew OpenFileDialog();
	fileDialog->Title = L"Seleccione video";

	if (fileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		System::String ^strFileName = fileDialog->FileName;
		marshal_context ^context = gcnew marshal_context();
		const char *fName = context->marshal_as<const char*>(strFileName);

		cv::VideoCapture *capture = new cv::VideoCapture();
		cv::String cvStrFileName = cv::String(fName);
		if (capture->open(cvStrFileName))
		{
			Debug::WriteLine(L"Video opened: " + strFileName);
		} else
		{
			Debug::WriteLine(L"Video can't be opened: " + strFileName);
		}
	}
}
