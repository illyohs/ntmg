project('ntmg', 'cpp',  default_options : ['cpp_std=c++17'])

indir = include_directories('include')

indir2 = include_directories('imgui')

sdl = dependency('sdl2')
gl = dependency('GL')
glew = dependency('glew')
glfw = dependency('glfw3')

srcs = [
    'src/main.cc',
    'src/workspace/map.cc',
    'src/workspace/tile.cc',

    'src/gui/imgui_impl_glfw_gl3.cc',

    'src/gui/mainwindow.cc',
    'src/gui/guiworkspace.cc',
    'src/gui/guitilewindow.cc',

    'imgui/imgui_draw.cpp',
    'imgui/imgui.cpp'
]

executable('ntmg', sources: srcs, include_directories: [indir, indir2], dependencies: [sdl, gl, glew, glfw])
