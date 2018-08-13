#pragma once

#include <string>
#include <vector>

#include "ambient-light.hh"
#include "camera.hh"
#include "direction-light.hh"
#include "object.hh"
#include "point-light.hh"

class Parser
{
    public:
        /* Constructor */
        Parser(std::string file_in);

        /* Methods */
        bool parse();

        /* Getter */
        Camera camera_get() const;
        std::vector<light::AmbientLight> lights_get() const;
        std::vector<Object> objects_get() const;

    private:
        std::string file_in_;
        Camera camera_;
        std::vector<light::AmbientLight> lights_;
        std::vector<Object> objects_;        
};
