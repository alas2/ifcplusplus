/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcUnitaryEquipmentTypeEnum.h"

// TYPE IfcUnitaryEquipmentTypeEnum = ENUMERATION OF	(AIRHANDLER	,AIRCONDITIONINGUNIT	,DEHUMIDIFIER	,SPLITSYSTEM	,ROOFTOPUNIT	,USERDEFINED	,NOTDEFINED);
IfcUnitaryEquipmentTypeEnum::IfcUnitaryEquipmentTypeEnum() {}
IfcUnitaryEquipmentTypeEnum::~IfcUnitaryEquipmentTypeEnum() {}
shared_ptr<IfcPPObject> IfcUnitaryEquipmentTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcUnitaryEquipmentTypeEnum> copy_self( new IfcUnitaryEquipmentTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcUnitaryEquipmentTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCUNITARYEQUIPMENTTYPEENUM("; }
	if( m_enum == ENUM_AIRHANDLER )
	{
		stream << ".AIRHANDLER.";
	}
	else if( m_enum == ENUM_AIRCONDITIONINGUNIT )
	{
		stream << ".AIRCONDITIONINGUNIT.";
	}
	else if( m_enum == ENUM_DEHUMIDIFIER )
	{
		stream << ".DEHUMIDIFIER.";
	}
	else if( m_enum == ENUM_SPLITSYSTEM )
	{
		stream << ".SPLITSYSTEM.";
	}
	else if( m_enum == ENUM_ROOFTOPUNIT )
	{
		stream << ".ROOFTOPUNIT.";
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
shared_ptr<IfcUnitaryEquipmentTypeEnum> IfcUnitaryEquipmentTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcUnitaryEquipmentTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcUnitaryEquipmentTypeEnum>(); }
	shared_ptr<IfcUnitaryEquipmentTypeEnum> type_object( new IfcUnitaryEquipmentTypeEnum() );
	if( boost::iequals( arg, L".AIRHANDLER." ) )
	{
		type_object->m_enum = IfcUnitaryEquipmentTypeEnum::ENUM_AIRHANDLER;
	}
	else if( boost::iequals( arg, L".AIRCONDITIONINGUNIT." ) )
	{
		type_object->m_enum = IfcUnitaryEquipmentTypeEnum::ENUM_AIRCONDITIONINGUNIT;
	}
	else if( boost::iequals( arg, L".DEHUMIDIFIER." ) )
	{
		type_object->m_enum = IfcUnitaryEquipmentTypeEnum::ENUM_DEHUMIDIFIER;
	}
	else if( boost::iequals( arg, L".SPLITSYSTEM." ) )
	{
		type_object->m_enum = IfcUnitaryEquipmentTypeEnum::ENUM_SPLITSYSTEM;
	}
	else if( boost::iequals( arg, L".ROOFTOPUNIT." ) )
	{
		type_object->m_enum = IfcUnitaryEquipmentTypeEnum::ENUM_ROOFTOPUNIT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcUnitaryEquipmentTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcUnitaryEquipmentTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
