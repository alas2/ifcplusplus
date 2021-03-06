/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcRampFlightTypeEnum = ENUMERATION OF	(STRAIGHT	,SPIRAL	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcRampFlightTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcRampFlightTypeEnumEnum
	{
		ENUM_STRAIGHT,
		ENUM_SPIRAL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcRampFlightTypeEnum();
	IfcRampFlightTypeEnum( IfcRampFlightTypeEnumEnum e ) { m_enum = e; }
	~IfcRampFlightTypeEnum();
	virtual const char* className() const { return "IfcRampFlightTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcRampFlightTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcRampFlightTypeEnumEnum m_enum;
};

