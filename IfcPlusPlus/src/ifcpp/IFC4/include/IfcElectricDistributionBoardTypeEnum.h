/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcElectricDistributionBoardTypeEnum = ENUMERATION OF	(CONSUMERUNIT	,DISTRIBUTIONBOARD	,MOTORCONTROLCENTRE	,SWITCHBOARD	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcElectricDistributionBoardTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcElectricDistributionBoardTypeEnumEnum
	{
		ENUM_CONSUMERUNIT,
		ENUM_DISTRIBUTIONBOARD,
		ENUM_MOTORCONTROLCENTRE,
		ENUM_SWITCHBOARD,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcElectricDistributionBoardTypeEnum();
	IfcElectricDistributionBoardTypeEnum( IfcElectricDistributionBoardTypeEnumEnum e ) { m_enum = e; }
	~IfcElectricDistributionBoardTypeEnum();
	virtual const char* className() const { return "IfcElectricDistributionBoardTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcElectricDistributionBoardTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcElectricDistributionBoardTypeEnumEnum m_enum;
};

