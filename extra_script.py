Import("env")


def before_upload(source, target, env):
	print("before_upload")
	# env.Replace(UPLOAD_SPEED=115200)

def after_upload(source, target, env):
	print "after_upload"

print "Current build targets", map(str, BUILD_TARGETS)

env.AddPreAction("upload", before_upload)
env.AddPostAction("upload", after_upload)
