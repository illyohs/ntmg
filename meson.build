project('ntmg', 'cpp',  default_options : ['cpp_std=c++17'])

indir = include_directories('include')

indir2 = include_directories('imgui')

sdl = dependency('sdl2')
gl = dependency('GL')
glew = dependency('glew')

srcs = [
    'src/main.cc',
    'src/workspace/map.cc',
    'src/workspace/tile.cc',
    'src/gui/imgui_impl_sdl_gl3.cc',
    'src/gui/mainwindow.cc',

    'imgui/imgui_draw.cpp',
    'imgui/imgui.cpp'
]

executable('ntmg', sources: srcs, include_directories: [indir, indir2], dependencies: [sdl, gl, glew])