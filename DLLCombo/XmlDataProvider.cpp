#include "SaxContentHandlerImp.h"
#include "XmlDataProvider.h"
//---------------------------------------------------------------------------
__fastcall XmlDataProvider::XmlDataProvider()
{
}
//---------------------------------------------------------------------------
__fastcall XmlDataProvider::~XmlDataProvider()
{
}
//---------------------------------------------------------------------------
void __fastcall XmlDataProvider::GetData(TStringList &MyValues)
{
	String xmlfile = "items.xml";

	CoInitialize(NULL);
	ISAXXMLReader* pRdr = NULL;
	HRESULT hr = CoCreateInstance(
					__uuidof(SAXXMLReader),
					NULL,
					CLSCTX_ALL,
					__uuidof(ISAXXMLReader),
					(void **)&pRdr);

	if (!FAILED(hr))
	{
		ISAXContentHandler* pContentHandler = new CSaxContentHandlerImp(MyValues);
		pRdr->putContentHandler(pContentHandler);

		//SAXErrorHandlerImpl * pEc = new SAXErrorHandlerImpl();
		//hr = pRdr->putErrorHandler(pEc);

		// SAXDTDHandlerImpl * pDc = new SAXDTDHandlerImpl();
		// hr = pRdr->putDTDHandler(pDc);

		if (FAILED((hr = pRdr->parseURL((wchar_t*)(xmlfile.c_str())))))
			MyValues.Add("parsing failed");

		pRdr->Release();
		delete pContentHandler;

	}
	else
	{
		ShowMessage("Error creating COM object");
	}

	CoUninitialize();

}
