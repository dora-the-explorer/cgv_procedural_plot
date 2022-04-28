#include <cgv_gl/gl/gl.h>
#include <cgv/base/node.h>

class procedural_plot : public cgv::base::node
{
public:
	procedural_plot() : node("procedural_plot")
	{
		std::cout << "Hallo" << std::endl;
	}
	std::string get_type_name() const 
	{ 
		return "procedural_plot"; 
	}
};

#include <cgv/base/register.h>
cgv::base::factory_registration<procedural_plot> noise_fac("new/demo/procedural_plot", 'N');
