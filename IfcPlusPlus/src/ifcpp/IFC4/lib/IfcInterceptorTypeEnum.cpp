/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcInterceptorTypeEnum.h"

// TYPE IfcInterceptorTypeEnum = ENUMERATION OF	(CYCLONIC	,GREASE	,OIL	,PETROL	,USERDEFINED	,NOTDEFINED);
IfcInterceptorTypeEnum::IfcInterceptorTypeEnum() {}
IfcInterceptorTypeEnum::~IfcInterceptorTypeEnum() {}
shared_ptr<IfcPPObject> IfcInterceptorTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcInterceptorTypeEnum> copy_self( new IfcInterceptorTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcInterceptorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCINTERCEPTORTYPEENUM("; }
	if( m_enum == ENUM_CYCLONIC )
	{
		stream << ".CYCLONIC.";
	}
	else if( m_enum == ENUM_GREASE )
	{
		stream << ".GREASE.";
	}
	else if( m_enum == ENUM_OIL )
	{
		stream << ".OIL.";
	}
	else if( m_enum == ENUM_PETROL )
	{
		stream << ".PETROL.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcInterceptorTypeEnum> IfcInterceptorTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcInterceptorTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcInterceptorTypeEnum>(); }
	shared_ptr<IfcInterceptorTypeEnum> type_object( new IfcInterceptorTypeEnum() );
	if( boost::iequals( arg, L".CYCLONIC." ) )
	{
		type_object->m_enum = IfcInterceptorTypeEnum::ENUM_CYCLONIC;
	}
	else if( boost::iequals( arg, L".GREASE." ) )
	{
		type_object->m_enum = IfcInterceptorTypeEnum::ENUM_GREASE;
	}
	else if( boost::iequals( arg, L".OIL." ) )
	{
		type_object->m_enum = IfcInterceptorTypeEnum::ENUM_OIL;
	}
	else if( boost::iequals( arg, L".PETROL." ) )
	{
		type_object->m_enum = IfcInterceptorTypeEnum::ENUM_PETROL;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcInterceptorTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcInterceptorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
