//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <ppltasks.h>
#include "Source.h"
#include "oauth/account.h"
#include "oauth/oauth.h"
#include <iostream>

using namespace App4;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

using namespace Windows::Foundation;
using namespace Windows::Web::Http;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

MainPage::MainPage()
{
	InitializeComponent();
}

void App4::MainPage::TextBlock_SelectionChanged_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

}


void App4::MainPage::TextBox_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e)
{
	auto roamingSettings = Windows::Storage::ApplicationData::Current->RoamingSettings;
	roamingSettings->Values->Insert("search", search_box->Text);
	if (roamingSettings->Values->HasKey("search"))
	{
		search_box->Text = roamingSettings->Values->Lookup("search")->ToString();
	}
}

void App4::MainPage::TextBlock_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

}

Windows::UI::Color color_picker(int i)
{
	if (i == 0) { return Windows::UI::Colors::PaleGreen; }
	if (i == 1) { return Windows::UI::Colors::PaleTurquoise; }
	if (i == 2) { return Windows::UI::Colors::PowderBlue; }
	if (i == 3) { return Windows::UI::Colors::RoyalBlue; }
	if (i == 4) { return Windows::UI::Colors::Navy; }
	if (i == 5) { return Windows::UI::Colors::MidnightBlue; }
	if (i == 6) { return Windows::UI::Colors::Purple; }
	if (i == 7) { return Windows::UI::Colors::PaleVioletRed; }
	if (i == 8) { return Windows::UI::Colors::Red; }
	else { return Windows::UI::Colors::IndianRed; }
}

void App4::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	const std::string consumer = "09b9dKuLPdfydpVDiyCJUGvVX";
	const std::string consumer_secret = "3UHBiiF7v0TPGAQVYeINBrWTzPQ8NGnYJq2RCOq42gDEqxkbaM";
	twitpp::oauth::account ac2(consumer, consumer_secret);

	
	//assume we have vector<double> times;
	frequency_gen(times);
	double mean_frequency = mean(times);
	double std_frequency = standard_deviation(times, mean_frequency);
	vector<int> categories;
	categories.resize(50);
	for(int i = 0; i < 50; i++)
	{
	categories[i] = category_determiner(times[i],mean_frequency,std_frequency);
	}
	
	//FAQ: Ever heard of arrays?
	
	//A: Unfortunately, Xaml requires all objects are stored individually...
	State_0->Background = ref new SolidColorBrush(color_picker(categories[0]));
	State_1->Background = ref new SolidColorBrush(color_picker(categories[1]));
	State_2->Background = ref new SolidColorBrush(color_picker(categories[2]));
	State_3->Background = ref new SolidColorBrush(color_picker(categories[3]));
	State_4->Background = ref new SolidColorBrush(color_picker(categories[4]));
	State_5->Background = ref new SolidColorBrush(color_picker(categories[5]));
	State_6->Background = ref new SolidColorBrush(color_picker(categories[6]));
	State_7->Background = ref new SolidColorBrush(color_picker(categories[7]));
	State_8->Background = ref new SolidColorBrush(color_picker(categories[8]));
	State_9->Background = ref new SolidColorBrush(color_picker(categories[9]));
	State_10->Background = ref new SolidColorBrush(color_picker(categories[10]));
	State_11->Background = ref new SolidColorBrush(color_picker(categories[11]));
	State_12->Background = ref new SolidColorBrush(color_picker(categories[12]));
	State_13->Background = ref new SolidColorBrush(color_picker(categories[13]));
	State_14->Background = ref new SolidColorBrush(color_picker(categories[14]));
	State_15->Background = ref new SolidColorBrush(color_picker(categories[15]));
	State_16->Background = ref new SolidColorBrush(color_picker(categories[16]));
	State_17->Background = ref new SolidColorBrush(color_picker(categories[17]));
	State_18->Background = ref new SolidColorBrush(color_picker(categories[18]));
	State_19->Background = ref new SolidColorBrush(color_picker(categories[19]));
	State_20->Background = ref new SolidColorBrush(color_picker(categories[20]));
	State_21->Background = ref new SolidColorBrush(color_picker(categories[21]));
	State_22->Background = ref new SolidColorBrush(color_picker(categories[22]));
	State_23->Background = ref new SolidColorBrush(color_picker(categories[23]));
	State_24->Background = ref new SolidColorBrush(color_picker(categories[24]));
	State_25->Background = ref new SolidColorBrush(color_picker(categories[25]));
	State_26->Background = ref new SolidColorBrush(color_picker(categories[26]));
	State_27->Background = ref new SolidColorBrush(color_picker(categories[27]));
	State_28->Background = ref new SolidColorBrush(color_picker(categories[28]));
	State_29->Background = ref new SolidColorBrush(color_picker(categories[29]));
	State_30->Background = ref new SolidColorBrush(color_picker(categories[30]));
	State_31->Background = ref new SolidColorBrush(color_picker(categories[31]));
	State_32->Background = ref new SolidColorBrush(color_picker(categories[32]));
	State_33->Background = ref new SolidColorBrush(color_picker(categories[33]));
	State_34->Background = ref new SolidColorBrush(color_picker(categories[34]));
	State_35->Background = ref new SolidColorBrush(color_picker(categories[35]));
	State_36->Background = ref new SolidColorBrush(color_picker(categories[36]));
	State_37->Background = ref new SolidColorBrush(color_picker(categories[37]));
	State_38->Background = ref new SolidColorBrush(color_picker(categories[38]));
	State_39->Background = ref new SolidColorBrush(color_picker(categories[39]));
	State_40->Background = ref new SolidColorBrush(color_picker(categories[40]));
	State_41->Background = ref new SolidColorBrush(color_picker(categories[41]));
	State_42->Background = ref new SolidColorBrush(color_picker(categories[42]));
	State_43->Background = ref new SolidColorBrush(color_picker(categories[43]));
	State_44->Background = ref new SolidColorBrush(color_picker(categories[44]));
	State_45->Background = ref new SolidColorBrush(color_picker(categories[45]));
	State_46->Background = ref new SolidColorBrush(color_picker(categories[46]));
	State_47->Background = ref new SolidColorBrush(color_picker(categories[47]));
	State_48->Background = ref new SolidColorBrush(color_picker(categories[48]));
	State_49->Background = ref new SolidColorBrush(color_picker(categories[49]));
	int top_num = 0;
	int top_frequency = categories[0];
	int low_num = 0;
	int low_frequency = categories[0];
	for(int i = 1; i < 50; i++)
	{
	if(categories[i] > categories[0])
	{
	top_frequency = categories[i]
	top_num = i;
	}
	if(categories[i] > categories[0])
	{
	low_frequency = categories[i]
	low_num = i;
	}
	}
	if (low_num == 0) { OS_TTS->Text = "Alabama"; }
	if (low_num == 1) { OS_TTS->Text =  "Alaska"; }
	if (low_num == 2) { OS_TTS->Text =  "Arizona"; }
	if (low_num == 3) { OS_TTS->Text =  "Arkansas"; }
	if (low_num == 4) { OS_TTS->Text =  "California"; }
	if (low_num == 5) { OS_TTS->Text =  "Colorado"; }
	if (low_num == 6) { OS_TTS->Text =  "Conneticut"; }
	if (low_num == 7) { OS_TTS->Text =  "Delaware"; }
	if (low_num == 8) { OS_TTS->Text =  "Florida"; }
	if (low_num == 9) { OS_TTS->Text =  "Georgia"; }
	if (low_num == 10) { OS_TTS->Text =  "Hawaii"; }
	if (low_num == 11) { OS_TTS->Text =  "Idaho"; }
	if (low_num == 12) { OS_TTS->Text =  "Illinois"; }
	if (low_num == 13) { OS_TTS->Text =  "Indiana"; }
	if (low_num == 14) { OS_TTS->Text =  "Iowa"; }
	if (low_num == 15) { OS_TTS->Text =  "Kansas"; }
	if (low_num == 16) { OS_TTS->Text =  "Kentucky"; }
	if (low_num == 17) { OS_TTS->Text =  "Louisiana"; }
	if (low_num == 18) { OS_TTS->Text =  "Maine"; }
	if (low_num == 19) { OS_TTS->Text =  "Massachusetts"; }
	if (low_num == 20) { OS_TTS->Text =  "Michigan"; }
	if (low_num == 21) { OS_TTS->Text =  "Minnesota"; }
	if (low_num == 22) { OS_TTS->Text =  "Missisipi"; }
	if (low_num == 23) { OS_TTS->Text =  "Missouri"; }
	if (low_num == 24) { OS_TTS->Text =  "Montana"; }
	if (low_num == 25) { OS_TTS->Text =  "Nebraska"; }
	if (low_num == 26) { OS_TTS->Text =  "Nevada"; }
	if (low_num == 27) { OS_TTS->Text =  "New Hampshire"; }
	if (low_num == 28) { OS_TTS->Text =  "New Jersey"; }
	if (low_num == 29) { OS_TTS->Text =  "New Mexico"; }
	if (low_num == 30) { OS_TTS->Text =  "New York"; }
	if (low_num == 31) { OS_TTS->Text =  "North Carolina"; }
	if (low_num == 32) { OS_TTS->Text =  "North Dakota"; }
	if (low_num == 33) { OS_TTS->Text =  "That State Down South"; }
	if (low_num == 34) { OS_TTS->Text =  "Oklahoma"; }
	if (low_num == 35) { OS_TTS->Text =  "Oregon"; }
	if (low_num == 36) { OS_TTS->Text =  "Pennsylvania"; }
	if (low_num == 37) { OS_TTS->Text =  "Rhode Island"; }
	if (low_num == 38) { OS_TTS->Text =  "South Carolina"; }
	if (low_num == 39) { OS_TTS->Text =  "South Dakota"; }
	if (low_num == 40) { OS_TTS->Text =  "Tennessee"; }
	if (low_num == 41) { OS_TTS->Text =  "Texas"; }
	if (low_num == 42) { OS_TTS->Text =  "Utah"; }
	if (low_num == 43) { OS_TTS->Text =  "Vermont"; }
	if (low_num == 44) { OS_TTS->Text =  "Virginia"; }
	if (low_num == 45) { OS_TTS->Text =  "Washington"; }
	if (low_num == 46) { OS_TTS->Text =  "West Virginia"; }
	if (low_num == 47) { OS_TTS->Text =  "Wisconsin"; }
	if (low_num == 48) { OS_TTS->Text =  "Wyoming"; }
	if (low_num == 49) { OS_TTS->Text =  "Maryland"; }
	if (top_num == 0) { OS_LTS->Text = "Alabama"; }
	if (top_num == 1) { OS_LTS->Text =  "Alaska"; }
	if (top_num == 2) { OS_LTS->Text =  "Arizona"; }
	if (top_num == 3) { OS_LTS->Text =  "Arkansas"; }
	if (top_num == 4) { OS_LTS->Text =  "California"; }
	if (top_num == 5) { OS_LTS->Text =  "Colorado"; }
	if (top_num == 6) { OS_LTS->Text =  "Conneticut"; }
	if (top_num == 7) { OS_LTS->Text =  "Delaware"; }
	if (top_num == 8) { OS_LTS->Text =  "Florida"; }
	if (top_num == 9) { OS_LTS->Text =  "Georgia"; }
	if (top_num == 10) { OS_LTS->Text =  "Hawaii"; }
	if (top_num == 11) { OS_LTS->Text =  "Idaho"; }
	if (top_num == 12) { OS_LTS->Text =  "Illinois"; }
	if (top_num == 13) { OS_LTS->Text =  "Indiana"; }
	if (top_num == 14) { OS_LTS->Text =  "Iowa"; }
	if (top_num == 15) { OS_LTS->Text =  "Kansas"; }
	if (top_num == 16) { OS_LTS->Text =  "Kentucky"; }
	if (top_num == 17) { OS_LTS->Text =  "Louisiana"; }
	if (top_num == 18) { OS_LTS->Text =  "Maine"; }
	if (top_num == 19) { OS_LTS->Text =  "Massachusetts"; }
	if (top_num == 20) { OS_LTS->Text =  "Michigan"; }
	if (top_num == 21) { OS_LTS->Text =  "Minnesota"; }
	if (top_num == 22) { OS_LTS->Text =  "Missisipi"; }
	if (top_num == 23) { OS_LTS->Text =  "Missouri"; }
	if (top_num == 24) { OS_LTS->Text =  "Montana"; }
	if (top_num == 25) { OS_LTS->Text =  "Nebraska"; }
	if (top_num == 26) { OS_LTS->Text =  "Nevada"; }
	if (top_num == 27) { OS_LTS->Text =  "New Hampshire"; }
	if (top_num == 28) { OS_LTS->Text =  "New Jersey"; }
	if (top_num == 29) { OS_LTS->Text =  "New Mexico"; }
	if (top_num == 30) { OS_LTS->Text =  "New York"; }
	if (top_num == 31) { OS_LTS->Text =  "North Carolina"; }
	if (top_num == 32) { OS_LTS->Text =  "North Dakota"; }
	if (top_num == 33) { OS_LTS->Text =  "That State Down South"; }
	if (top_num == 34) { OS_LTS->Text =  "Oklahoma"; }
	if (top_num == 35) { OS_LTS->Text =  "Oregon"; }
	if (top_num == 36) { OS_LTS->Text =  "Pennsylvania"; }
	if (top_num == 37) { OS_LTS->Text =  "Rhode Island"; }
	if (top_num == 38) { OS_LTS->Text =  "South Carolina"; }
	if (top_num == 39) { OS_LTS->Text =  "South Dakota"; }
	if (top_num == 40) { OS_LTS->Text =  "Tennessee"; }
	if (top_num == 41) { OS_LTS->Text =  "Texas"; }
	if (top_num == 42) { OS_LTS->Text =  "Utah"; }
	if (top_num == 43) { OS_LTS->Text =  "Vermont"; }
	if (top_num == 44) { OS_LTS->Text =  "Virginia"; }
	if (top_num == 45) { OS_LTS->Text =  "Washington"; }
	if (top_num == 46) { OS_LTS->Text =  "West Virginia"; }
	if (top_num == 47) { OS_LTS->Text =  "Wisconsin"; }
	if (top_num == 48) { OS_LTS->Text =  "Wyoming"; }
	if (top_num == 49) { OS_LTS->Text =  "Maryland"; }
	



	// In C++ and CX, the system resources used by httpClient object are released 
	// when the object falls out of scope or by the destructor (delete operator)
}


void App4::MainPage::TextBox_TextChanged_1(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e)
{

}


void App4::MainPage::TextBlock_SelectionChanged_2(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

}


void App4::MainPage::State_5_DataContextChanged(Windows::UI::Xaml::FrameworkElement^ sender, Windows::UI::Xaml::DataContextChangedEventArgs^ args)
{

}


void App4::MainPage::State_16_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Kentucky";
}


void App4::MainPage::State_45_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Washington";
}


void App4::MainPage::State_35_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Oregon";
}


void App4::MainPage::State_4_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "California";
}


void App4::MainPage::State_2_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Arizona";
}


void App4::MainPage::State_29_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "New Mexico";
}


void App4::MainPage::State_41_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Texas";
}


void App4::MainPage::State_17_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Louisiana";
}


void App4::MainPage::State_22_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Mississippi";
}


void App4::MainPage::State_0_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Alabama";
}


void App4::MainPage::State_9_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Georgia";
}


void App4::MainPage::State_8_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Florida";
}


void App4::MainPage::State_38_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "South Carolina";
}


void App4::MainPage::State_31_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "North Carolina";
}


void App4::MainPage::State_24_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Montana";
}


void App4::MainPage::State_32_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "North Dakota";
}


void App4::MainPage::State_39_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "South Dakota";
}


void App4::MainPage::State_48_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Wyoming";
}


void App4::MainPage::State_11_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Idaho";
}


void App4::MainPage::State_26_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Nevada";
}


void App4::MainPage::State_42_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Utah";
}


void App4::MainPage::State_5_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Colorado";
}


void App4::MainPage::State_15_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Kansas";
}


void App4::MainPage::State_34_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Oklahoma";
}


void App4::MainPage::State_25_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Nebraska";
}


void App4::MainPage::State_21_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Minnesota";
}


void App4::MainPage::State_14_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Iowa";
}


void App4::MainPage::State_23_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Missouri";
}


void App4::MainPage::State_3_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Arkansas";
}


void App4::MainPage::State_40_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Tennessee";
}


void App4::MainPage::State_12_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Illinois";
}


void App4::MainPage::State_13_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Indiana";
}


void App4::MainPage::State_33_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "That State Down South";
}


void App4::MainPage::State_30_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "New York";
}


void App4::MainPage::State_36_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Pennsylvania";
}


void App4::MainPage::State_46_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "West Virginia";
}


void App4::MainPage::State_44_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Virginia";
}


void App4::MainPage::State_18_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Maine";
}


void App4::MainPage::State_43_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Vermont";
}


void App4::MainPage::State_27_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "New Hampshire";
}


void App4::MainPage::State_19_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Massachusetts";
}


void App4::MainPage::State_7_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Delaware";
}


void App4::MainPage::State_1_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Maryland";
}


void App4::MainPage::State_47_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Wisconson";
}


void App4::MainPage::State_20New_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	State_Name->Text = "Go Blue!";
}
