/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcEventTriggerTypeEnum = ENUMERATION OF	(EVENTRULE	,EVENTMESSAGE	,EVENTTIME	,EVENTCOMPLEX	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcEventTriggerTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcEventTriggerTypeEnumEnum
	{
		ENUM_EVENTRULE,
		ENUM_EVENTMESSAGE,
		ENUM_EVENTTIME,
		ENUM_EVENTCOMPLEX,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcEventTriggerTypeEnum();
	IfcEventTriggerTypeEnum( IfcEventTriggerTypeEnumEnum e ) { m_enum = e; }
	~IfcEventTriggerTypeEnum();
	virtual const char* className() const { return "IfcEventTriggerTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcEventTriggerTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcEventTriggerTypeEnumEnum m_enum;
};

