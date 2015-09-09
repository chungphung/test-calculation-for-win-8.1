//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace App1
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void plus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void minus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void button_Copy2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void div(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void equal(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void multi(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
