/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcStructuralLoadOrResult.h"
class IFCPP_EXPORT IfcLengthMeasure;
class IFCPP_EXPORT IfcRatioMeasure;
//ENTITY
class IFCPP_EXPORT IfcSurfaceReinforcementArea : public IfcStructuralLoadOrResult
{ 
public:
	IfcSurfaceReinforcementArea();
	IfcSurfaceReinforcementArea( int id );
	~IfcSurfaceReinforcementArea();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcSurfaceReinforcementArea"; }


	// IfcStructuralLoad -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>						m_Name;						//optional

	// IfcStructuralLoadOrResult -----------------------------------------------------------

	// IfcSurfaceReinforcementArea -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcLengthMeasure> >	m_SurfaceReinforcement1;	//optional
	std::vector<shared_ptr<IfcLengthMeasure> >	m_SurfaceReinforcement2;	//optional
	shared_ptr<IfcRatioMeasure>					m_ShearReinforcement;		//optional
};

