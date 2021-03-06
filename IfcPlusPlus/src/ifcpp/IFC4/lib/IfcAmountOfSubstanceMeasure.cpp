/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcAmountOfSubstanceMeasure.h"

// TYPE IfcAmountOfSubstanceMeasure = REAL;
IfcAmountOfSubstanceMeasure::IfcAmountOfSubstanceMeasure() {}
IfcAmountOfSubstanceMeasure::IfcAmountOfSubstanceMeasure( double value ) { m_value = value; }
IfcAmountOfSubstanceMeasure::~IfcAmountOfSubstanceMeasure() {}
shared_ptr<IfcPPObject> IfcAmountOfSubstanceMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcAmountOfSubstanceMeasure> copy_self( new IfcAmountOfSubstanceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcAmountOfSubstanceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCAMOUNTOFSUBSTANCEMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcAmountOfSubstanceMeasure> IfcAmountOfSubstanceMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAmountOfSubstanceMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAmountOfSubstanceMeasure>(); }
	shared_ptr<IfcAmountOfSubstanceMeasure> type_object( new IfcAmountOfSubstanceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
