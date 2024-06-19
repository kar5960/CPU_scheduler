document.getElementById('task-form').addEventListener('submit', function (event) {
    event.preventDefault();
    const burstTime = document.getElementById('burst-time').value;
    const priority = document.getElementById('priority').value;
    const arrivalTime = document.getElementById('arrival-time').value;

    const task = {
        burstTime: parseInt(burstTime),
        priority: parseInt(priority),
        arrivalTime: parseInt(arrivalTime)
    };

    // Add task to the scheduler and display the output
    addTaskToScheduler(task);
});

function addTaskToScheduler(task) {
    // This function should send the task to the backend and receive scheduling results
    // For now, let's just display the task as a placeholder
    const outputDiv = document.getElementById('scheduler-output');
    const taskElement = document.createElement('div');
    taskElement.textContent = `Task - Burst Time: ${task.burstTime}, Priority: ${task.priority}, Arrival Time: ${task.arrivalTime}`;
    outputDiv.appendChild(taskElement);
}