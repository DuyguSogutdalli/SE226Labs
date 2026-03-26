n = int(input("Enter number of tasks: "))

tasks = {}

for i in range(n):
    name = input("Enter task name: ")
    dep_count = int(input(f"How many dependencies for {name}: "))
    deps = []
    for j in range(dep_count):
        d = input(f"Enter dependency {j+1}: ")
        deps.append(d)
    tasks[name] = deps

print("\nTASK STRUCTURE:")
for t in tasks:
    print(t, "->", tasks[t])

completed = set()
order = []

initial = []
for t in tasks:
    if len(tasks[t]) == 0:
        initial.append(t)

print("\nINITIAL TASKS (no dependencies):")
if initial:
    for t in initial:
        print(t)
else:
    print("None")

while len(order) < len(tasks):
    progress = False

    for task in tasks:
        if task not in completed:
            ready = True
            for dep in tasks[task]:
                if dep not in completed:
                    ready = False
                    break

            if ready:
                completed.add(task)
                order.append(task)
                progress = True

    if not progress:
        print("\nEXECUTION ORDER:")
        print("No task can be started.")
        print("\nERROR: Circular dependency detected!")
        print("These tasks could not be completed:")
        for t in tasks:
            if t not in completed:
                print(t)
        break

if len(order) == len(tasks):
    print("\nEXECUTION ORDER:")
    for i in range(len(order)):
        print(f"Step {i+1}: {order[i]}")
