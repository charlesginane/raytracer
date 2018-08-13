#include "parser.hh"

Parser::Parser(std::string file_in) : file_in_(file_in)
{}

bool
Parser::parse()
{
  return false;
}

Camera
Parser::camera_get() const
{
  return camera_;
}

std::vector<light::AmbientLight>
Parser::lights_get() const
{
  return lights_;
}

std::vector<Object>
Parser::objects_get() const
{
  return objects_;
}
