/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Category.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

Category::Category()
{
    m_Id = 0L;
    m_Name = "";
    
}

Category::~Category()
{
}

std::string Category::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("Name", m_Name);
	write_json(ss, pt, false);
	return ss.str();
}

void Category::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", 0L);
	m_Name = pt.get("Name", "");
}

int64_t Category::getId() const
{
    return m_Id;
}
void Category::setId(int64_t value)
{
    m_Id = value;
}
std::string Category::getName() const
{
    return m_Name;
}
void Category::setName(std::string value)
{
    m_Name = value;
}

}
}
}
}

