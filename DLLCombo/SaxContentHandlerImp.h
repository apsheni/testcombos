#ifndef Unit1H
#define Unit1H

#include <stdio.h>
#include <iostream>
#include <vcl.h>
#include <msxml6.h>

class CSaxContentHandlerImp : public ISAXContentHandler
{
private:
	TStringList &mParsed;
public:

	__fastcall CSaxContentHandlerImp(TStringList &MyValues);
	__fastcall ~CSaxContentHandlerImp(void);


	long __stdcall QueryInterface(const struct _GUID &,void ** );
	unsigned long __stdcall AddRef(void);
	unsigned long __stdcall Release(void);

	virtual HRESULT STDMETHODCALLTYPE putDocumentLocator( 
		/* [in] */ ISAXLocator __RPC_FAR *pLocator);

	virtual HRESULT STDMETHODCALLTYPE startDocument(void);

	virtual HRESULT STDMETHODCALLTYPE endDocument(void);

	virtual HRESULT STDMETHODCALLTYPE startPrefixMapping(
		/* [in] */ const wchar_t *pwchPrefix,
		/* [in] */ int cchPrefix,
		/* [in] */ const wchar_t *pwchUri,
		/* [in] */ int cchUri);

	virtual HRESULT STDMETHODCALLTYPE endPrefixMapping(
		/* [in] */ const wchar_t *pwchPrefix,
		/* [in] */ int cchPrefix);

	virtual HRESULT STDMETHODCALLTYPE startElement( 
		/* [in] */ const wchar_t *pwchNamespaceUri,
		/* [in] */ int cchNamespaceUri,
		/* [in] */ const wchar_t *pwchLocalName,
		/* [in] */ int cchLocalName,
		/* [in] */ const wchar_t *pwchRawName,
		/* [in] */ int cchRawName,
		/* [in] */ ISAXAttributes *pAttributes);

	virtual HRESULT STDMETHODCALLTYPE endElement( 
		/* [in] */ const wchar_t *pwchNamespaceUri,
		/* [in] */ int cchNamespaceUri,
		/* [in] */ const wchar_t *pwchLocalName,
		/* [in] */ int cchLocalName,
		/* [in] */ const wchar_t *pwchRawName,
		/* [in] */ int cchRawName);

	virtual HRESULT STDMETHODCALLTYPE characters( 
		/* [in] */ const wchar_t *pwchChars,
		/* [in] */ int cchChars);

	virtual HRESULT STDMETHODCALLTYPE ignorableWhitespace( 
		/* [in] */ const wchar_t *pwchChars,
		/* [in] */ int cchChars);

	virtual HRESULT STDMETHODCALLTYPE processingInstruction( 
		/* [in] */ const wchar_t *pwchTarget,
		/* [in] */ int cchTarget,
		/* [in] */ const wchar_t *pwchData,
		/* [in] */ int cchData);

	virtual HRESULT STDMETHODCALLTYPE skippedEntity( 
		/* [in] */ const wchar_t *pwchName,
		/* [in] */ int cchName);
};
#endif
