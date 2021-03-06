/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcTrimmingPreference.h"

// TYPE IfcTrimmingPreference = ENUMERATION OF	(CARTESIAN	,PARAMETER	,UNSPECIFIED);
IfcTrimmingPreference::IfcTrimmingPreference() {}
IfcTrimmingPreference::~IfcTrimmingPreference() {}
shared_ptr<IfcPPObject> IfcTrimmingPreference::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTrimmingPreference> copy_self( new IfcTrimmingPreference() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTrimmingPreference::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTRIMMINGPREFERENCE("; }
	if( m_enum == ENUM_CARTESIAN )
	{
		stream << ".CARTESIAN.";
	}
	else if( m_enum == ENUM_PARAMETER )
	{
		stream << ".PARAMETER.";
	}
	else if( m_enum == ENUM_UNSPECIFIED )
	{
		stream << ".UNSPECIFIED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcTrimmingPreference> IfcTrimmingPreference::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTrimmingPreference>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTrimmingPreference>(); }
	shared_ptr<IfcTrimmingPreference> type_object( new IfcTrimmingPreference() );
	if( boost::iequals( arg, L".CARTESIAN." ) )
	{
		type_object->m_enum = IfcTrimmingPreference::ENUM_CARTESIAN;
	}
	else if( boost::iequals( arg, L".PARAMETER." ) )
	{
		type_object->m_enum = IfcTrimmingPreference::ENUM_PARAMETER;
	}
	else if( boost::iequals( arg, L".UNSPECIFIED." ) )
	{
		type_object->m_enum = IfcTrimmingPreference::ENUM_UNSPECIFIED;
	}
	return type_object;
}
