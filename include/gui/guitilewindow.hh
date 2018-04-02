#pragma once

#include <string>

#include <imgui.h>
#include <GL/glew.h>

namespace ntmg::gui
{
    class GuiTileWindow
    {
        private:
            std::string _name;
            static void gl_callback(const ImDrawList* parent_list, const ImDrawCmd* cmd)
            {
                glClear(GL_COLOR_BUFFER_BIT);
                glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
                glColor3f(1.0, 0.0, 0.0);
    
                int xsize=0,ysize=0;

                for(int j=0;j<10;j++)
                {
                    xsize=0;
                    for(int i=0;i<10;i++)
                    {
                        glBegin(GL_POLYGON);
                        {
                           glVertex3f(-50.0+xsize, -50.0+ysize, 0.0);
                           glVertex3f(-40.0+xsize, -50.0+ysize, 0.0);
                           glVertex3f(-40.0+xsize, -40.0+ysize, 0.0);
                           glVertex3f(-50.0+xsize, -40.0+ysize, 0.0);
                        }
                        glEnd();
                        xsize+=10.0;
                    }
                    ysize+=10.0;
                }
                glFlush();
            }
        public:
            GuiTileWindow();
            ~GuiTileWindow();
            void init();
    };

}