/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcControllerTypeEnum = ENUMERATION OF	(FLOATING	,PROGRAMMABLE	,PROPORTIONAL	,MULTIPOSITION	,TWOPOSITION	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcControllerTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcControllerTypeEnumEnum
	{
		ENUM_FLOATING,
		ENUM_PROGRAMMABLE,
		ENUM_PROPORTIONAL,
		ENUM_MULTIPOSITION,
		ENUM_TWOPOSITION,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcControllerTypeEnum();
	IfcControllerTypeEnum( IfcControllerTypeEnumEnum e ) { m_enum = e; }
	~IfcControllerTypeEnum();
	virtual const char* className() const { return "IfcControllerTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcControllerTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcControllerTypeEnumEnum m_enum;
};

