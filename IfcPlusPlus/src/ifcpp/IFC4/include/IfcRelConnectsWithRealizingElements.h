/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcRelConnectsElements.h"
class IFCPP_EXPORT IfcElement;
class IFCPP_EXPORT IfcLabel;
//ENTITY
class IFCPP_EXPORT IfcRelConnectsWithRealizingElements : public IfcRelConnectsElements
{ 
public:
	IfcRelConnectsWithRealizingElements();
	IfcRelConnectsWithRealizingElements( int id );
	~IfcRelConnectsWithRealizingElements();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 9; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRelConnectsWithRealizingElements"; }


	// IfcRoot -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGloballyUniqueId>			m_GlobalId;
	//  shared_ptr<IfcOwnerHistory>				m_OwnerHistory;				//optional
	//  shared_ptr<IfcLabel>					m_Name;						//optional
	//  shared_ptr<IfcText>						m_Description;				//optional

	// IfcRelationship -----------------------------------------------------------

	// IfcRelConnects -----------------------------------------------------------

	// IfcRelConnectsElements -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcConnectionGeometry>		m_ConnectionGeometry;		//optional
	//  shared_ptr<IfcElement>					m_RelatingElement;
	//  shared_ptr<IfcElement>					m_RelatedElement;

	// IfcRelConnectsWithRealizingElements -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcElement> >	m_RealizingElements;
	shared_ptr<IfcLabel>					m_ConnectionType;			//optional
};

