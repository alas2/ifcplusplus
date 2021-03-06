/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcGeometricSetSelect.h"

// TYPE IfcGeometricSetSelect = SELECT	(IfcCurve	,IfcPoint	,IfcSurface);
shared_ptr<IfcGeometricSetSelect> IfcGeometricSetSelect::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.size() == 0 ){ return shared_ptr<IfcGeometricSetSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcGeometricSetSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcGeometricSetSelect>();
	}
	shared_ptr<IfcGeometricSetSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
