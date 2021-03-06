/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcRepresentation.h"
class IFCPP_EXPORT IfcShapeAspect;
//ENTITY
class IFCPP_EXPORT IfcShapeModel : public IfcRepresentation
{ 
public:
	IfcShapeModel();
	IfcShapeModel( int id );
	~IfcShapeModel();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcShapeModel"; }


	// IfcRepresentation -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcRepresentationContext>					m_ContextOfItems;
	//  shared_ptr<IfcLabel>									m_RepresentationIdentifier;	//optional
	//  shared_ptr<IfcLabel>									m_RepresentationType;		//optional
	//  std::vector<shared_ptr<IfcRepresentationItem> >			m_Items;
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRepresentationMap> >			m_RepresentationMap_inverse;
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignments_inverse;
	//  std::vector<weak_ptr<IfcProductRepresentation> >		m_OfProductRepresentation_inverse;

	// IfcShapeModel -----------------------------------------------------------
	// inverse attributes:
	std::vector<weak_ptr<IfcShapeAspect> >					m_OfShapeAspect_inverse;
};

