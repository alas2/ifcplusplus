/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcDirection.h"
#include "ifcpp/IFC4/include/IfcExtrudedAreaSolidTapered.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcExtrudedAreaSolidTapered 
IfcExtrudedAreaSolidTapered::IfcExtrudedAreaSolidTapered() {}
IfcExtrudedAreaSolidTapered::IfcExtrudedAreaSolidTapered( int id ) { m_id = id; }
IfcExtrudedAreaSolidTapered::~IfcExtrudedAreaSolidTapered() {}
shared_ptr<IfcPPObject> IfcExtrudedAreaSolidTapered::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcExtrudedAreaSolidTapered> copy_self( new IfcExtrudedAreaSolidTapered() );
	if( m_SweptArea )
	{
		if( options.shallow_copy_IfcProfileDef ) { copy_self->m_SweptArea = m_SweptArea; }
		else { copy_self->m_SweptArea = dynamic_pointer_cast<IfcProfileDef>( m_SweptArea->getDeepCopy(options) ); }
	}
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement3D>( m_Position->getDeepCopy(options) ); }
	if( m_ExtrudedDirection ) { copy_self->m_ExtrudedDirection = dynamic_pointer_cast<IfcDirection>( m_ExtrudedDirection->getDeepCopy(options) ); }
	if( m_Depth ) { copy_self->m_Depth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_Depth->getDeepCopy(options) ); }
	if( m_EndSweptArea )
	{
		if( options.shallow_copy_IfcProfileDef ) { copy_self->m_EndSweptArea = m_EndSweptArea; }
		else { copy_self->m_EndSweptArea = dynamic_pointer_cast<IfcProfileDef>( m_EndSweptArea->getDeepCopy(options) ); }
	}
	return copy_self;
}
void IfcExtrudedAreaSolidTapered::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCEXTRUDEDAREASOLIDTAPERED" << "(";
	if( m_SweptArea ) { stream << "#" << m_SweptArea->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_ExtrudedDirection ) { stream << "#" << m_ExtrudedDirection->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Depth ) { m_Depth->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_EndSweptArea ) { stream << "#" << m_EndSweptArea->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcExtrudedAreaSolidTapered::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcExtrudedAreaSolidTapered::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcExtrudedAreaSolidTapered, expecting 5, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_SweptArea, map );
	readEntityReference( args[1], m_Position, map );
	readEntityReference( args[2], m_ExtrudedDirection, map );
	m_Depth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map );
	readEntityReference( args[4], m_EndSweptArea, map );
}
void IfcExtrudedAreaSolidTapered::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcExtrudedAreaSolid::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "EndSweptArea", m_EndSweptArea ) );
}
void IfcExtrudedAreaSolidTapered::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcExtrudedAreaSolid::getAttributesInverse( vec_attributes_inverse );
}
void IfcExtrudedAreaSolidTapered::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcExtrudedAreaSolid::setInverseCounterparts( ptr_self_entity );
}
void IfcExtrudedAreaSolidTapered::unlinkFromInverseCounterparts()
{
	IfcExtrudedAreaSolid::unlinkFromInverseCounterparts();
}
