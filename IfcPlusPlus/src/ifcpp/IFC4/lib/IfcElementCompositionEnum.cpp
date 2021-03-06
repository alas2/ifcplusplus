/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcElementCompositionEnum.h"

// TYPE IfcElementCompositionEnum = ENUMERATION OF	(COMPLEX	,ELEMENT	,PARTIAL);
IfcElementCompositionEnum::IfcElementCompositionEnum() {}
IfcElementCompositionEnum::~IfcElementCompositionEnum() {}
shared_ptr<IfcPPObject> IfcElementCompositionEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcElementCompositionEnum> copy_self( new IfcElementCompositionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcElementCompositionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELEMENTCOMPOSITIONENUM("; }
	if( m_enum == ENUM_COMPLEX )
	{
		stream << ".COMPLEX.";
	}
	else if( m_enum == ENUM_ELEMENT )
	{
		stream << ".ELEMENT.";
	}
	else if( m_enum == ENUM_PARTIAL )
	{
		stream << ".PARTIAL.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcElementCompositionEnum> IfcElementCompositionEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElementCompositionEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElementCompositionEnum>(); }
	shared_ptr<IfcElementCompositionEnum> type_object( new IfcElementCompositionEnum() );
	if( boost::iequals( arg, L".COMPLEX." ) )
	{
		type_object->m_enum = IfcElementCompositionEnum::ENUM_COMPLEX;
	}
	else if( boost::iequals( arg, L".ELEMENT." ) )
	{
		type_object->m_enum = IfcElementCompositionEnum::ENUM_ELEMENT;
	}
	else if( boost::iequals( arg, L".PARTIAL." ) )
	{
		type_object->m_enum = IfcElementCompositionEnum::ENUM_PARTIAL;
	}
	return type_object;
}
