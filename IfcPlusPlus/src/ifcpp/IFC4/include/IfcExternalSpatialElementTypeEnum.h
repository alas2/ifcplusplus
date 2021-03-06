/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcExternalSpatialElementTypeEnum = ENUMERATION OF	(EXTERNAL	,EXTERNAL_EARTH	,EXTERNAL_WATER	,EXTERNAL_FIRE	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcExternalSpatialElementTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcExternalSpatialElementTypeEnumEnum
	{
		ENUM_EXTERNAL,
		ENUM_EXTERNAL_EARTH,
		ENUM_EXTERNAL_WATER,
		ENUM_EXTERNAL_FIRE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcExternalSpatialElementTypeEnum();
	IfcExternalSpatialElementTypeEnum( IfcExternalSpatialElementTypeEnumEnum e ) { m_enum = e; }
	~IfcExternalSpatialElementTypeEnum();
	virtual const char* className() const { return "IfcExternalSpatialElementTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcExternalSpatialElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcExternalSpatialElementTypeEnumEnum m_enum;
};

