/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCartesianTransformationOperator2D.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcMirroredProfileDef.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"

// ENTITY IfcMirroredProfileDef 
IfcMirroredProfileDef::IfcMirroredProfileDef() {}
IfcMirroredProfileDef::IfcMirroredProfileDef( int id ) { m_id = id; }
IfcMirroredProfileDef::~IfcMirroredProfileDef() {}
shared_ptr<IfcPPObject> IfcMirroredProfileDef::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMirroredProfileDef> copy_self( new IfcMirroredProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_ParentProfile )
	{
		if( options.shallow_copy_IfcProfileDef ) { copy_self->m_ParentProfile = m_ParentProfile; }
		else { copy_self->m_ParentProfile = dynamic_pointer_cast<IfcProfileDef>( m_ParentProfile->getDeepCopy(options) ); }
	}
	if( m_Operator ) { copy_self->m_Operator = dynamic_pointer_cast<IfcCartesianTransformationOperator2D>( m_Operator->getDeepCopy(options) ); }
	if( m_Label ) { copy_self->m_Label = dynamic_pointer_cast<IfcLabel>( m_Label->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMirroredProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCMIRROREDPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ParentProfile ) { stream << "#" << m_ParentProfile->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Operator ) { stream << "#" << m_Operator->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Label ) { m_Label->getStepParameter( stream ); } else { stream << "*"; }
	stream << ");";
}
void IfcMirroredProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcMirroredProfileDef::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMirroredProfileDef, expecting 5, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_ParentProfile, map );
	readEntityReference( args[3], m_Operator, map );
	m_Label = IfcLabel::createObjectFromSTEP( args[4], map );
}
void IfcMirroredProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcDerivedProfileDef::getAttributes( vec_attributes );
}
void IfcMirroredProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcDerivedProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IfcMirroredProfileDef::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcDerivedProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IfcMirroredProfileDef::unlinkFromInverseCounterparts()
{
	IfcDerivedProfileDef::unlinkFromInverseCounterparts();
}
