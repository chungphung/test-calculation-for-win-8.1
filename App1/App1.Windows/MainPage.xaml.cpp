//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace App1;

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

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

MainPage::MainPage()
{
	InitializeComponent();
}

int ch1, ch2, ch3, ch4 = 0;
int s, d, m = 0;


void App1::MainPage::plus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
		ch1 = 1;
		String^ str1 = a1->Text;
		wstring ws1(str1->Data());
		wstringstream convertor;
		int ws1_int;
		convertor << ws1;
		convertor >> ws1_int;
		s = s + ws1_int;
		ch2 = s;
}


void App1::MainPage::minus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	ch1 = 2;
}


void App1::MainPage::div(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	ch1 = 3;
}


void App1::MainPage::equal(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (ch1 == 0)
	{
		String^ str1 = a1->Text;
		wstring ws1(str1->Data());
		wstringstream convertor;
		convertor << ws1;
		convertor >> s;
		a2->Text = s.ToString();
	}
	a2->Text = s.ToString();
}


void App1::MainPage::multi(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	ch1 = 4;
}
