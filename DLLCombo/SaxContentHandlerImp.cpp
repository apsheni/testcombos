#include "SaxContentHandlerImp.h"

__fastcall CSaxContentHandlerImp::CSaxContentHandlerImp(TStringList &MyValues)
	: mParsed(MyValues)
{
}
//---------------------------------------------------------------------------
__fastcall CSaxContentHandlerImp::~CSaxContentHandlerImp(void)
{
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::putDocumentLocator( 
			/* [in] */ ISAXLocator __RPC_FAR *pLocator)
{
	return S_OK;
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::startDocument()
{
	return S_OK;
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::endDocument(void)
{
	return S_OK;
}  
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::startPrefixMapping(
			/* [in] */ const wchar_t *pwchPrefix,
			/* [in] */ int cchPrefix,
			/* [in] */ const wchar_t *pwchUri,
			/* [in] */ int cchUri)
{
	return S_OK;
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::endPrefixMapping(
			/* [in] */ const wchar_t *pwchPrefix,
			/* [in] */ int cchPrefix)
{
	return S_OK;
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::startElement( 
			/* [in] */ const wchar_t *pwchNamespaceUri,
			/* [in] */ int cchNamespaceUri,
			/* [in] */ const wchar_t *pwchLocalName,
			/* [in] */ int cchLocalName,
			/* [in] */ const wchar_t *pwchRawName,
			/* [in] */ int cchRawName,
			/* [in] */ ISAXAttributes *pAttributes)
{
	return S_OK;
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::endElement( 
			/* [in] */ const wchar_t *pwchNamespaceUri,
			/* [in] */ int cchNamespaceUri,
			/* [in] */ const wchar_t *pwchLocalName,
			/* [in] */ int cchLocalName,
			/* [in] */ const wchar_t *pwchRawName,
			/* [in] */ int cchRawName)
{
	return S_OK;
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::characters( 
			/* [in] */ const wchar_t *pwchChars,
			/* [in] */ int cchChars)
{
	if (cchChars > 1)
	{
		std::wstring str;
		str.assign((wchar_t*)pwchChars, cchChars);

		bool bTrimmed = false;
		for (unsigned i = 0; i < str.length(); ++i) //trim
		{
			if (pwchChars[i] != ' ' && pwchChars[i] != '\t')
			{
				str.erase(0, i);
				bTrimmed = true;
				break;
			}
		}

		if (!str.empty() && bTrimmed)
			mParsed.Add(str.c_str());
	}
	return S_OK;
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::ignorableWhitespace(
			/* [in] */ const wchar_t *pwchChars,
			/* [in] */ int cchChars)
{
	return S_OK;
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::processingInstruction( 
			/* [in] */ const wchar_t *pwchTarget,
			/* [in] */ int cchTarget,
			/* [in] */ const wchar_t *pwchData,
			/* [in] */ int cchData)
{
	return S_OK;
}
//---------------------------------------------------------------------------
HRESULT STDMETHODCALLTYPE CSaxContentHandlerImp::skippedEntity( 
			/* [in] */ const wchar_t *pwchVal,
			/* [in] */ int cchVal)
{
	return S_OK;
}
//---------------------------------------------------------------------------
long __stdcall CSaxContentHandlerImp::QueryInterface(const struct _GUID &riid,void ** ppvObject)
{
	return 0;
}
//---------------------------------------------------------------------------
unsigned long __stdcall CSaxContentHandlerImp::AddRef()
{
	return 0;
}
//---------------------------------------------------------------------------
unsigned long __stdcall CSaxContentHandlerImp::Release()
{
	return 0;
}


