/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcFontStyle.h"

// TYPE IfcFontStyle = STRING;
IfcFontStyle::IfcFontStyle() {}
IfcFontStyle::IfcFontStyle( std::wstring value ) { m_value = value; }
IfcFontStyle::~IfcFontStyle() {}
shared_ptr<IfcPPObject> IfcFontStyle::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcFontStyle> copy_self( new IfcFontStyle() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcFontStyle::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFONTSTYLE("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcFontStyle> IfcFontStyle::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFontStyle>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFontStyle>(); }
	shared_ptr<IfcFontStyle> type_object( new IfcFontStyle() );
	readString( arg, type_object->m_value );
	return type_object;
}
