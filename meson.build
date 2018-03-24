project('ntmg', 'cpp',  default_options : ['cpp_std=c++17'])

indir = include_directories('include')

sdl = dependency('sdl2')

srcs = [
    'src/main.cc',
    'src/workspace/map.cc',
    'src/workspace/tile.cc',
    'src/ui/twindow.cc'
]

executable('ntmg', sources: srcs, include_directories: indir, dependencies: [sdl])