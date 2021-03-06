/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcStructuralLoad.h"

// ENTITY IfcStructuralLoad 
IfcStructuralLoad::IfcStructuralLoad() {}
IfcStructuralLoad::IfcStructuralLoad( int id ) { m_id = id; }
IfcStructuralLoad::~IfcStructuralLoad() {}
shared_ptr<IfcPPObject> IfcStructuralLoad::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcStructuralLoad> copy_self( new IfcStructuralLoad() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	return copy_self;
}
void IfcStructuralLoad::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSTRUCTURALLOAD" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcStructuralLoad::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcStructuralLoad::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralLoad, expecting 1, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
}
void IfcStructuralLoad::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
}
void IfcStructuralLoad::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
}
void IfcStructuralLoad::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcStructuralLoad::unlinkFromInverseCounterparts()
{
}
