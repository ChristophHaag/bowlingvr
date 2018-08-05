project(
	'bowlingvr', 'cpp',
	default_options : 'cpp_std=c++11',
)
sources = [
	'bowlingvr/Application.cpp',
	'bowlingvr/BulletUtils.cpp',
	'bowlingvr/BulletWorld.cpp',
	'bowlingvr/CDebugDraw.cpp',
	'bowlingvr/Camera.cpp',
	'bowlingvr/Light.cpp',
	'bowlingvr/MainScene.cpp',
	'bowlingvr/MainSceneVR.cpp',
	'bowlingvr/Mesh.cpp',
	'bowlingvr/Model.cpp',
	'bowlingvr/ObjectPickingVR.cpp',
	'bowlingvr/PlayerBody.cpp',
	'bowlingvr/PostProcessing.cpp',
	'bowlingvr/Shader.cpp',
	'bowlingvr/Shadowmap.cpp',
	'bowlingvr/Window.cpp',
	'bowlingvr/bVRRenderModel.cpp',
	'bowlingvr/main.cpp',
	'bowlingvr/libs/shared/Matrices.cpp'
]

cc = meson.get_compiler('cpp')
openvr_lib = cc.find_library('openvr_api') #TODO, dirs : [''])
deps = [
	dependency('sdl2'),
	dependency('SDL_image'),
	dependency('bullet'),
	dependency('glew'),
	dependency('assimp'),
	openvr_lib
]

inc = include_directories([
	'bowlingvr',
	'bowlingvr/libs/include/'
])


executable('bowlingvr', sources, include_directories : inc, install : true, dependencies : deps)
