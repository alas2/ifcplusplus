/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcRailingTypeEnum = ENUMERATION OF	(HANDRAIL	,GUARDRAIL	,BALUSTRADE	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcRailingTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcRailingTypeEnumEnum
	{
		ENUM_HANDRAIL,
		ENUM_GUARDRAIL,
		ENUM_BALUSTRADE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcRailingTypeEnum();
	IfcRailingTypeEnum( IfcRailingTypeEnumEnum e ) { m_enum = e; }
	~IfcRailingTypeEnum();
	virtual const char* className() const { return "IfcRailingTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcRailingTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcRailingTypeEnumEnum m_enum;
};

