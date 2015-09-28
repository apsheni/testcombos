C++ test task - combobox with autocompletion.
Implementation should be split into an application (exe) and libraries (dll).

In library (DLLCombo):
to develop an interface for reading predetermined data IDataProvider
create 3 IDataProvider implementations of the interface for the following data sources:
1. a text file (a set of rows 1 line - one)
2. an xml file - to use MSXML SAX reader (DOM model - do not use). Format xml - at its discretion.
3. registry
User input should be stored.

In the application (TestCombos):
connect 3 IDataProvider data sources to 3 different comboboxes.

TestCombos\Win32\Release
contains exe, dll, and xml/txt input files.

IDataProvider.cpp
IDataProvider.h
abstract class, defines an interface

RegDataProvider.cpp
RegDataProvider.h
implementation of IDataProvider for combo with registry info

TextDataProvider.cpp
TextDataProvider.h
implementation of IDataProvider for combo with text file content

XmlDataProvider.cpp
XmlDataProvider.h
implementation of IDataProvider for combo with xml file content

SaxContentHandlerImp.cpp
SaxContentHandlerImp.h
implementation of MSXML ISAXContentHandler

MyCombo.cpp
MyCombo.h
custom combobox uses IDataProvider