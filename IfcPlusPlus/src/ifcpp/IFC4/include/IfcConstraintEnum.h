/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcConstraintEnum = ENUMERATION OF	(HARD	,SOFT	,ADVISORY	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcConstraintEnum : virtual public IfcPPObject
{
public:
	enum IfcConstraintEnumEnum
	{
		ENUM_HARD,
		ENUM_SOFT,
		ENUM_ADVISORY,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcConstraintEnum();
	IfcConstraintEnum( IfcConstraintEnumEnum e ) { m_enum = e; }
	~IfcConstraintEnum();
	virtual const char* className() const { return "IfcConstraintEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcConstraintEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcConstraintEnumEnum m_enum;
};

