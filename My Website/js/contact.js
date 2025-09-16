const form = document.getElementById('contactForm');
const statusEl = document.getElementById('formStatus');
if (form) {
  form.addEventListener('submit', e => {
    e.preventDefault();
    const name = form.name.value.trim();
    const email = form.email.value.trim();
    const message = form.message.value.trim();
    if (!name || !email || !message) {
      statusEl.textContent = 'Please complete all fields.';
      return;
    }
    // Basic email pattern check
    if (!/^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(email)) {
      statusEl.textContent = 'Please enter a valid email address.';
      return;
    }
    // Send via mailto (replace with backend later)
    const subject = encodeURIComponent('Portfolio Contact from ' + name);
    const body = encodeURIComponent(message + '\n\nFrom: ' + name + ' <' + email + '>');
    window.location.href = 'mailto:you@example.com?subject=' + subject + '&body=' + body;
    statusEl.textContent = 'Opening your mail app to send the message...';
    form.reset();
  });
}
